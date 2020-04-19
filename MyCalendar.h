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
	
	void makeCalendar(Ui::MomsCookClass& ui, const QDate& date);
	void setDate(const QDate& date);
	void reloadContents(const QDate& date);

	QDate getDate();
	Contents& getContents(int date);
private:
	Contents contents[31];
	QDate selectedDay;
};
#endif

