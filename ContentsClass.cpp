#include "ContentsClass.h"
#include "Contents.h"
#include "MyCalendar.h"
#include <iostream>
#include <QDate>
#include "AddContentsClass.h"

#pragma comment(lib, "libmysql.lib")

ContentsClass::ContentsClass(QWidget* parent)
	: QWidget(parent), contents(nullptr), dateIndex(0), currRice(""), currSoup(""), updateFlag(false), addContents(nullptr){
	ui.setupUi(this);

	listViews.append(this->findChild<QListWidget*>("listWidget_1"));
	listViews.append(this->findChild<QListWidget*>("listWidget_2"));
	listViews.append(this->findChild<QListWidget*>("listWidget_3"));

	conn = mysql_init(nullptr);
	if (!conn) {
		assert(false);
	}
	conn = mysql_real_connect(conn, "localhost", "root", "Wja896523", "dish", 3306, (char*)NULL, 0);
	if (conn) {
		std::cout << "Connect Success!" << std::endl;
		mysql_query(conn, "set names utf-8");
	}
	else {
		std::cout << "Connect Fail!" << std::endl;
	}

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(saveDish()));

	for (int i = 0; i < CONTENTS_TYPE; ++i) {
		currSide[i] = "";
		QObject::connect(listViews[i], SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(clickedDish()));
	}
}

ContentsClass::~ContentsClass() {
}
void ContentsClass::setDateIndex(unsigned int idx) {
	dateIndex = idx;
}
 void ContentsClass::setAddContentsClass(AddContentsClass* add) {
	addContents = add;
}
QTextBrowser* ContentsClass::getDateTextBrowser() {
	return ui.dateTextBrowser;
}
QTextBrowser* ContentsClass::getContentsTextBrowser() {
	return ui.contentsTextBrowser;
}
void ContentsClass::setContents(Contents* contents) {
	if (contents != nullptr) {
		this->contents = contents;
	}
}

void ContentsClass::loadData() {
	string query = "SELECT * FROM food ";
	int result = mysql_query(conn, query.c_str());
	MYSQL_RES* sql_result = nullptr;
	MYSQL_ROW sql_row;

	for (int i = 0; i < 3; ++i) {
		listViews[i]->clear();
	}

	sql_result = mysql_store_result(conn);
	while ((sql_row = mysql_fetch_row(sql_result)) != nullptr) {
		listViews[atoi(sql_row[1])]->addItem(QString::fromUtf8(sql_row[0]));
	}
		
	mysql_free_result(sql_result);
}

bool ContentsClass::isUpdated() {
	if (updateFlag) {
		updateFlag = false;
		return true;
	}
	return false;
}
bool ContentsClass::setSide(const QString& side) {
	for (unsigned int i = 0; i < 3; ++i) {
		if (currSide[i] == "") {
			currSide[i] = side;
			return true;
		}
	}
	return false;
}

void ContentsClass::setContentsText(QString& contentsText) {
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("밥: ");
	contentsText += currRice;
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("국: ");
	contentsText += currSoup;
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬1: ");
	contentsText += currSide[0];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬2: ");
	contentsText += currSide[1];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬3: ");
	contentsText += currSide[2];
	contentsText += "\n";
}

void ContentsClass::setContentsText(Calendar* c) {
	calendar = c;
}

void ContentsClass::setMYSQL(MYSQL* c) {
	conn = c;
}

void ContentsClass::resetSavedDishes() {
	currRice = "";
	currSoup = "";
	currSide[0] = "";
	currSide[1] = "";
	currSide[2] = "";
}
void ContentsClass::clickedDish() {
	ui.contentsTextBrowser->clear();
	DISH_TYPE type = static_cast<DISH_TYPE>(ui.tabWidget->currentIndex());
	switch (type)
	{
	case DISH_TYPE::RICE:
		currRice = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		break;
	case DISH_TYPE::SOUP:
		currSoup = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		break;
	default:
		setSide(listViews[ui.tabWidget->currentIndex()]->currentItem()->text());
		break;
	}
	QString contentsText = "";
	setContentsText(contentsText);
	ui.contentsTextBrowser->setText(contentsText);
	ui.contentsTextBrowser->update();
}

void ContentsClass::saveDish() {
	QDate date = calendar->getDate();

	if (currRice == "")
		assert(false);

	contents[dateIndex].setDish(DISH_TYPE::RICE, currRice);
	contents[dateIndex].setDish(DISH_TYPE::SOUP, currSoup);
	contents[dateIndex].setDish(DISH_TYPE::SIDE1, currSide[0]);
	contents[dateIndex].setDish(DISH_TYPE::SIDE2, currSide[1]);
	contents[dateIndex].setDish(DISH_TYPE::SIDE3, currSide[2]);
	string sql = "INSERT INTO menu VALUES ( ";
	sql += "'";
	sql += to_string(date.year());
	sql += "-";
	if (date.month() / 10 == 0) {
		sql += "0";
	}
	sql += to_string(date.month());
	sql += "-";
	if (date.day() / 10 == 0) {
		sql += "0";
	}
	sql += to_string(date.day());
	sql += "', '";

	sql += currRice.toStdString();
	sql += "', '";

	sql += currSoup.toStdString();
	sql += "', ";
	for (unsigned int i = 0; i < 3; ++i) {
		sql += "'";
		sql += currSide[i].toStdString();
		sql += "'";
		if (i < 2) {
			sql += ", ";
		}
	}
	sql += " )";
	int ret = mysql_query(conn, sql.c_str());

	if (ret == 0) {
		res = mysql_store_result(conn);

		mysql_free_result(res);
	}
	else {
		sql = "UPDATE menu SET rice = \'";
		sql += currRice.toStdString();
		sql += "\', soup = \'";
		sql += currSoup.toStdString();
		sql += "\', side1 = \'";
		sql += currSide[0].toStdString();
		sql += "\', side2 = \'";
		sql += currSide[1].toStdString();
		sql += "\', side3 = \'";
		sql += currSide[2].toStdString();
		sql += "\' WHERE date = \'";
		sql += to_string(date.year());
		sql += "-";
		if (date.month() / 10 == 0) {
			sql += "0";
		}
		sql += to_string(date.month());
		sql += "-";
		if (date.day() / 10 == 0) {
			sql += "0";
		}
		sql += to_string(date.day());
		sql += "\'";

		ret = mysql_query(conn, sql.c_str());

		if (ret == 0) {
			res = mysql_store_result(conn);

			mysql_free_result(res);
		}
	}

	updateFlag = true;

	this->close();
}