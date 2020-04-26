#include "MyCalendar.h"
#include "ui_MomsCook.h"

Calendar::Calendar() {
	selectedDay = QDate::currentDate();
}

Calendar::~Calendar() {
}
void Calendar::setDate(const QDate& date) {
	selectedDay = date;
}
QDate Calendar::getDate() {
	return selectedDay;
}
Contents* Calendar::getContent(int date) {
	if (date < CONTENTS_COUNT) {
		return &contents[date];
	}
	else {
		return nullptr;
	}
}
Contents* Calendar::getContents() {
	return contents;
}
void Calendar::reloadContents(const QDate& date) {
	for (unsigned int i = 0; i < DAYS; ++i) {
		//
	}
}
void Calendar::makeCalendar(Ui::MomsCookClass& ui, const QDate& date) {

	QString m(to_string(date.month()).c_str());
	ui.textMonth->setFontPointSize(13);
	ui.textMonth->setFontWeight(QFont::Bold);
	ui.textMonth->setText(m);
	ui.textMonth->setAlignment(Qt::AlignCenter);
	int startDate = date.dayOfWeek();
	int currDate = 1;
	int realDate = 1;
	int y = date.year();
	int mo = date.month();

	for (unsigned int i = 0; i < DAYS; ++i) {
		if (startDate <= currDate) {
				if (QDate::isValid(y, mo, realDate)) {
					string strContents = to_string(realDate++);
					strContents += "\n";
					strContents += contents[realDate - 2].getDishs();
					ui.days[i]->setText(QString::fromLocal8Bit(strContents.c_str()));
				} else {
					ui.days[i]->setText("");
				}
		} else {
				++currDate;
				ui.days[i]->setText("");
		}
	}
}
