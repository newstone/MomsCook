#pragma once

#include <QWidget>
#include <string>
#include <mysql.h>
#include "ui_ContentsClass.h"

#define CONTENTS_TYPE 3

using namespace std;

class Calendar;
class Contents;
class AddContentsClass;

class ContentsClass : public QWidget
{
	Q_OBJECT
public:
	ContentsClass(QWidget *parent = Q_NULLPTR);
	~ContentsClass();
	void setDateIndex(unsigned int idx);
	void setContents(Contents* contents);
	bool setSide(const QString& side);
	void setContentsText(QString& contentsText);
	void setContentsText(Calendar* c);
	void setMYSQL(MYSQL* conn);
	void resetSavedDishes();
	void loadData();
	bool isUpdated();

	void setAddContentsClass(AddContentsClass* add);
	QTextBrowser* getDateTextBrowser();
	QTextBrowser* getContentsTextBrowser();
private slots:
	void clickedDish();
	void saveDish();
private:
	Ui::ContentsClass ui;
	QList <QListWidget*> listViews;

	AddContentsClass* addContents;
	MYSQL* conn;
	MYSQL_RES* res;
	MYSQL_ROW row;
	Contents* contents;
	Calendar* calendar;
	int dateIndex;

	bool updateFlag;

	QString currRice;
	QString currSoup;
	QString currSide[3];
};
