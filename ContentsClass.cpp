#include "ContentsClass.h"
#include "Contents.h"
#include "MyCalendar.h"
#include <iostream>
#include <QDate>
#include "AddContentsClass.h"

#pragma comment(lib, "libmysql.lib")

ContentsClass::ContentsClass(QWidget* parent)
	: QWidget(parent), contents(nullptr), dateIndex(0), updateFlag(false), addContents(nullptr), radioBtnIndex(-1){
	ui.setupUi(this);

	listViews.append(this->findChild<QListWidget*>("listWidget_1"));
	listViews.append(this->findChild<QListWidget*>("listWidget_2"));
	listViews.append(this->findChild<QListWidget*>("listWidget_3"));

	connect(ui.radioButton, &QPushButton::clicked, [=]() {
		radioFunction(0);
		});
	connect(ui.radioButton_2, &QPushButton::clicked, [=]() {
		radioFunction(1);
		});
	connect(ui.radioButton_3, &QPushButton::clicked, [=]() {
		radioFunction(2);
		});
	connect(ui.resetButton, &QPushButton::clicked, [=]() {

		for (unsigned int j = 0; j < 2; ++j) {
			currRice[j] = "";
			currSoup[j] = "";
			currSide[j][0] = "";
			currSide[j][1] = "";
			currSide[j][2] = "";
		}
		QString contentsText = "";
		setContentsText(contentsText);
		ui.contentsTextBrowser->setText(contentsText);
		ui.contentsTextBrowser->update();
		});
	QObject::connect(ui.searchButton, SIGNAL(clicked()), this, SLOT(searchDish()));
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(saveDish()));

	for (int i = 0; i < CONTENTS_TYPE; ++i) {
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
bool ContentsClass::setSide(int t, const QString& side) {
	for (unsigned int i = 0; i < 3; ++i) {
		if (currSide[t][i] == "") {
			currSide[t][i] = side;
			return true;
		}
	}
	return false;
}

void ContentsClass::setContentsText(QString& contentsText) {
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("[중식]\n");
	contentsText += QString::fromLocal8Bit("특식: ");
	contentsText += currRice[0];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("국: ");
	contentsText += currSoup[0];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬1: ");
	contentsText += currSide[0][0];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬2: ");
	contentsText += currSide[0][1];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬3: ");
	contentsText += currSide[0][2];
	contentsText += "\n";

	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("[석식]\n");
	contentsText += QString::fromLocal8Bit("특식: ");
	contentsText += currRice[1];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("국: ");
	contentsText += currSoup[1];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬1: ");
	contentsText += currSide[1][0];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬2: ");
	contentsText += currSide[1][1];
	contentsText += "\n";
	contentsText += QString::fromLocal8Bit("반찬3: ");
	contentsText += currSide[1][2];
	contentsText += "\n";
}

void ContentsClass::setCalendar(Calendar* c) {
	calendar = c;
}

void ContentsClass::setMYSQL(MYSQL* c) {
	conn = c;
}

void ContentsClass::resetSavedDishes() {
	for (unsigned int j = 0; j < 2; ++j) {
		currRice[j] = "";
		currSoup[j] = "";
		currSide[j][0] = "";
		currSide[j][1] = "";
		currSide[j][2] = "";
	}
	radioBtnIndex = -1;

	ui.radioButton->setAutoExclusive(false);
	ui.radioButton->setChecked(false);
	ui.radioButton->setAutoExclusive(true);
	ui.radioButton_2->setAutoExclusive(false);
	ui.radioButton_2->setChecked(false);
	ui.radioButton_2->setAutoExclusive(true);
	ui.radioButton_3->setAutoExclusive(false);
	ui.radioButton_3->setChecked(false);
	ui.radioButton_3->setAutoExclusive(true);

	ui.searchLine->setText("");
}

void ContentsClass::radioFunction(int i)
{
	radioBtnIndex = i;
}
void ContentsClass::clickedDish() {
	ui.contentsTextBrowser->clear();
	
	switch (radioBtnIndex)
	{
	case 0:
		if(currRice[0] == "")
			currRice[0] = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		else if (currRice[1] == "")
			currRice[1] = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		break;
	case 1:
		if(currSoup[0] == "")
			currSoup[0] = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		else if (currSoup[1] == "")
			currSoup[1] = listViews[ui.tabWidget->currentIndex()]->currentItem()->text();
		break;
	case 2:
		if (currSide[0][2] == "")
			setSide(0, listViews[ui.tabWidget->currentIndex()]->currentItem()->text());
		else if (currSide[1][2] == "")
			setSide(1, listViews[ui.tabWidget->currentIndex()]->currentItem()->text());
		break;
		
		break;
	default:
		break;
	}
	QString contentsText = "";
	setContentsText(contentsText);
	ui.contentsTextBrowser->setText(contentsText);
	ui.contentsTextBrowser->update();
}
void ContentsClass::searchDish() {
	if (ui.searchLine->text() == "") {
		loadData();
		return;
	}
	string query = "SELECT * FROM food WHERE name LIKE \'%" + ui.searchLine->text().toStdString() + "%\'";
	int result = mysql_query(conn, query.c_str());
	
	if (result == 0) {
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
}
void ContentsClass::saveDish() {
	QDate date = calendar->getDate();
	for (unsigned int j = 0; j < 2; ++j) {
		contents[dateIndex].setDish(j, DISH_TYPE::RICE, currRice[j]);
		contents[dateIndex].setDish(j, DISH_TYPE::SOUP, currSoup[j]);
		contents[dateIndex].setDish(j, DISH_TYPE::SIDE1, currSide[j][0]);
		contents[dateIndex].setDish(j, DISH_TYPE::SIDE2, currSide[j][1]);
		contents[dateIndex].setDish(j, DISH_TYPE::SIDE3, currSide[j][2]);
	}
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

	sql += currRice[0].toStdString();
	sql += "', '";

	sql += currSoup[0].toStdString();
	sql += "', ";
	for (unsigned int i = 0; i < 3; ++i) {
		sql += "'";
		sql += currSide[0][i].toStdString();
		sql += "', ";
	}

	sql += currRice[1].toStdString();
	sql += "', '";

	sql += currSoup[1].toStdString();
	sql += "', ";
	for (unsigned int i = 0; i < 3; ++i) {
		sql += "'";
		sql += currSide[1][i].toStdString();
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
		sql = "UPDATE menu SET ricea = \'";
		sql += currRice[0].toStdString();
		sql += "\', soupa = \'";
		sql += currSoup[0].toStdString();
		sql += "\', sidea1 = \'";
		sql += currSide[0][0].toStdString();
		sql += "\', sidea2 = \'";
		sql += currSide[0][1].toStdString();
		sql += "\', sidea3 = \'";
		sql += currSide[0][2].toStdString();

		sql += "\', riceb = \'";
		sql += currRice[1].toStdString();
		sql += "\', soupb = \'";
		sql += currSoup[1].toStdString();
		sql += "\', sideb1 = \'";
		sql += currSide[1][0].toStdString();
		sql += "\', sideb2 = \'";
		sql += currSide[1][1].toStdString();
		sql += "\', sideb3 = \'";
		sql += currSide[1][2].toStdString();

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