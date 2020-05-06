#pragma once

#include <QWidget>
#include <string>
#include <mysql.h>
#include "ui_ContentsClass.h"

using namespace std;

class Calendar;
class Contents;

class ContentsClass : public QWidget
{
	Q_OBJECT
public:
	ContentsClass(QWidget *parent = Q_NULLPTR);
	~ContentsClass();
	void setDateIndex(unsigned int idx);
	void setContents(Contents* contents);
	bool setSide(const std::string& side);
	void SetContentsText(string& contentsText);
	void SetContentsText(Calendar* c);
	void resetSavedDishes();
	void loadData();
	bool isUpdated();

	QTextBrowser* getDateTextBrowser();
	QTextBrowser* getContentsTextBrowser();
private slots:
	void clickedDish();
	void saveDish();
private:
	Ui::ContentsClass ui;
	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	Contents* contents;
	Calendar* calendar;
	int dateIndex;

	bool updateFlag;

	string currRice;
	string currSoup;
	string currSide[3];
};
