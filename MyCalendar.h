#pragma once
#include "Contents.h"

#ifndef CALENDAR
#define CALENDAR
#include <QDate>

namespace Ui {
	class MomsCookClass;
};

class Calendar {
public:
	Calendar();
	virtual ~Calendar();
	
	void makeCalendar(Ui::MomsCookClass& ui, QDate date);
	void setDate(QDate date);
	QDate getDate();
private:
	Contents contents[31];
	QDate selectedDay;
};
#endif

