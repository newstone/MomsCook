#include "MyCalendar.h"

Calendar::Calendar() {
}

Calendar::~Calendar() {
}

void Calendar::setSelectedDay(QDate d) {
	selectedDay = d;
}


void Calendar::setToDay(QDate d) {
	toDay = d;
}