#include "MomsCook.h"
#include <QUndoStack>
#include <string>

using namespace std;

#define SET_DATE(num)\
	if(startDate <= currDate){\
		if(QDate::isValid(y, mo, realDate)){\
			ui.days##num->setText(to_string(realDate++).c_str());\
		}\
	} else {\
		++currDate;\
	}\
	
	

MomsCook::MomsCook(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	init();
}
void MomsCook::init() {
	makeCalendar();
}
void MomsCook::makeCalendar() {
	calendar.setToDay(QDate::currentDate());
	QString m(to_string(QDate::currentDate().month()).c_str());
	ui.textMonth->setFontPointSize(13);
	ui.textMonth->setFontWeight(QFont::Bold);
	ui.textMonth->setText(m);
	ui.textMonth->setAlignment(Qt::AlignCenter);

	QDate date;
	date.setDate(QDate::currentDate().year(), QDate::currentDate().month(), 1);
	int startDate = date.dayOfWeek();
	int currDate = 1;
	int realDate = 1;
	int y = QDate::currentDate().year();
	int mo = QDate::currentDate().month();

	SET_DATE(00)
		SET_DATE(01)
		SET_DATE(02)
		SET_DATE(03)
		SET_DATE(04)
		SET_DATE(05)
		SET_DATE(06)

		SET_DATE(07)
		SET_DATE(08)
		SET_DATE(09)
		SET_DATE(10)
		SET_DATE(11)
		SET_DATE(12)
		SET_DATE(13)

		SET_DATE(14)
		SET_DATE(15)
		SET_DATE(16)
		SET_DATE(17)
		SET_DATE(18)
		SET_DATE(19)
		SET_DATE(20)

		SET_DATE(21)
		SET_DATE(22)
		SET_DATE(23)
		SET_DATE(24)
		SET_DATE(25)
		SET_DATE(26)
		SET_DATE(27)

		SET_DATE(28)
		SET_DATE(29)
		SET_DATE(30)
		SET_DATE(31)
		SET_DATE(32)
		SET_DATE(33)
		SET_DATE(34)

		SET_DATE(35)
		SET_DATE(36)
		SET_DATE(37)
		SET_DATE(38)
		SET_DATE(39)
		SET_DATE(40)
		SET_DATE(41)
}