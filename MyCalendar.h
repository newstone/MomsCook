#pragma once
#include "Contents.h"

#ifndef CALENDAR
#define CALENDAR
#include <QDate>

#define CONTENTS_COUNT 31
#define DAYS 42

class MYSQL;
class MyTextBrowser;

namespace Ui {
	class MomsCookClass;
};

class Calendar {
public:
	Calendar();
	virtual ~Calendar();
	
	void makeCalendar(Ui::MomsCookClass& ui, QList<MyTextBrowser*>& days, const QDate& date);
	void setDate(const QDate& date);
	void reloadContents(const QDate& date);
	
	void setMYSQL(MYSQL* c);
	QDate getDate();
	Contents* getContent(int date);
	Contents* getContents();
private:
	Contents contents[CONTENTS_COUNT];
	QDate selectedDay;
	MYSQL* conn;
};
#endif

