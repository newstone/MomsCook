#pragma once
#include "Contents.h"

#ifndef CALENDAR
#define CALENDAR
#include <QDate>

#define CONTENTS_COUNT 31

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
	Contents* getContent(int date);
	Contents* getContents();
private:
	Contents contents[CONTENTS_COUNT];
	QDate selectedDay;
};
#endif

