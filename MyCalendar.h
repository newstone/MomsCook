#pragma once
#include "Contents.h"

#ifndef CALENDAR
#define CALENDAR
#include <QDate>

class Calendar {
public:
	Calendar();
	virtual ~Calendar();

	void setSelectedDay(QDate d);
	void setToDay(QDate d);
private:
	QDate selectedDay;
	QDate toDay;
};
#endif

