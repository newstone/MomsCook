#include "ContentsClass.h"
#include "Contents.h"
#include "MyCalendar.h"
#include <iostream>
#include <QDate>

#pragma comment(lib, "libmysql.lib")

ContentsClass::ContentsClass(QWidget* parent)
	: QWidget(parent), contents(nullptr), dateIndex(0), currRice(""), currSoup(""), updateFlag(false) {
	ui.setupUi(this);
	loadData();

	conn = mysql_init(nullptr);
	if (!conn) {
		assert();
	}
	conn = mysql_real_connect(conn, "localhost", "root", "Wja896523", "dish", 3306, (char*)NULL, 0);
	if (conn) {
		std::cout << "Connect Success!" << std::endl;
	}
	else {
		std::cout << "Connect Fail!" << std::endl;
	}

	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(saveDish()));
	for (int i = 0; i < CONTENTS_TYPE; ++i) {
		currSide[i] = "";
		QObject::connect(ui.listViews[i], SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(clickedDish()));
	}
}

ContentsClass::~ContentsClass() {
}
void ContentsClass::setDateIndex(unsigned int idx) {
	dateIndex = idx;
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
	for (unsigned int i = 0; i < 3; ++i) {
		int size = 100;
		std::string contentsName = "contents";
		for (unsigned int c = 0; c < size; ++c) {
			ui.listViews[i]->addItem((contentsName + std::to_string(c)).c_str());
		}
	}
}

bool ContentsClass::isUpdated() {
	if (updateFlag) {
		updateFlag = false;
		return true;
	}
	return false;
}
bool ContentsClass::setSide(const string& side) {
	for (unsigned int i = 0; i < 3; ++i) {
		if (currSide[i] == "") {
			currSide[i] = side;
			return true;
		}
	}
	return false;
}

void ContentsClass::setContentsText(string& contentsText) {
	contentsText += "====================\n";
	contentsText += "밥: ";
	contentsText += currRice;
	contentsText += "\n";
	contentsText += "국: ";
	contentsText += currSoup;
	contentsText += "\n";
	contentsText += "반찬1: ";
	contentsText += currSide[0];
	contentsText += "\n";
	contentsText += "반찬2: ";
	contentsText += currSide[1];
	contentsText += "\n";
	contentsText += "반찬3: ";
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
		currRice = ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString();
		break;
	case DISH_TYPE::SOUP:
		currSoup = ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString();
		break;
	default:
		setSide(ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString());
		break;
	}
	string contentsText = "";
	setContentsText(contentsText);
	ui.contentsTextBrowser->setText(QString::fromLocal8Bit(contentsText.c_str()));
	ui.contentsTextBrowser->update();
}

void ContentsClass::saveDish() {
	QDate date = calendar->getDate();

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

	sql += currRice;
	sql += "', '";

	sql += currSoup;
	sql += "', ";
	for (unsigned int i = 0; i < 3; ++i) {
		sql += "'";
		sql += currSide[i];
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
		sql += currRice;
		sql += "\', soup = \'";
		sql += currSoup;
		sql += "\', side1 = \'";
		sql += currSide[0];
		sql += "\', side2 = \'";
		sql += currSide[1];
		sql += "\', side3 = \'";
		sql += currSide[2];
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