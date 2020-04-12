#include "MomsCook.h"
#include <QMouseEvent>
#include <QUndoStack>
#include <string>

#define SET_MOUSE_PRESS_EVENT(num) \
	if (obj == ui.days##num) {\
		showContents(QDate::currentDate());\
	}\

#define SET_MOUSE_PRESS_EVENT(num) \
	if (obj == ui.days##num) {\
		showContents(QDate::currentDate());\
	}\

using namespace std;

MomsCook::MomsCook(QWidget *parent)
	: selectedContents(nullptr), QMainWindow(parent)
{
	ui.setupUi(this);
	selectedContents = new ContentsClass();
	selectedContents->hide();
	connect(ui.prevButton, &QPushButton::clicked, [=]() {
		handleButton(false);
		});
	connect(ui.nextButton, &QPushButton::clicked, [=]() {
		handleButton(true);
		});
	init();
}
MomsCook::~MomsCook() {
	if(selectedContents)
		delete selectedContents;
}
void MomsCook::init() {
	QDate date;
	date.setDate(calendar.getDate().year(), calendar.getDate().month(), 1);
	calendar.makeCalendar(ui, date);

	ui.days00->installEventFilter(this);
	ui.days01->installEventFilter(this);
	ui.days02->installEventFilter(this);
	ui.days03->installEventFilter(this);
	ui.days04->installEventFilter(this);
	ui.days05->installEventFilter(this);
	ui.days06->installEventFilter(this);

	ui.days07->installEventFilter(this);
	ui.days08->installEventFilter(this);
	ui.days09->installEventFilter(this);
	ui.days10->installEventFilter(this);
	ui.days11->installEventFilter(this);
	ui.days12->installEventFilter(this);
	ui.days13->installEventFilter(this);

	ui.days14->installEventFilter(this);
	ui.days15->installEventFilter(this);
	ui.days16->installEventFilter(this);
	ui.days17->installEventFilter(this);
	ui.days18->installEventFilter(this);
	ui.days19->installEventFilter(this);
	ui.days20->installEventFilter(this);

	ui.days21->installEventFilter(this);
	ui.days22->installEventFilter(this);
	ui.days23->installEventFilter(this);
	ui.days24->installEventFilter(this);
	ui.days25->installEventFilter(this);
	ui.days26->installEventFilter(this);
	ui.days27->installEventFilter(this);

	ui.days28->installEventFilter(this);
	ui.days29->installEventFilter(this);
	ui.days30->installEventFilter(this);
	ui.days31->installEventFilter(this);
	ui.days32->installEventFilter(this);
	ui.days33->installEventFilter(this);
	ui.days34->installEventFilter(this);

	ui.days35->installEventFilter(this);
	ui.days36->installEventFilter(this);
	ui.days37->installEventFilter(this);
	ui.days38->installEventFilter(this);
	ui.days39->installEventFilter(this);
	ui.days40->installEventFilter(this);
	ui.days41->installEventFilter(this);
}

void MomsCook::handleButton(bool flag) {
	int month = calendar.getDate().month();

	if (flag) {
		++month;
	}
	else {
		--month;
	}

	QDate date;
	if (month < 1) {
		month = 12;
		date.setDate(calendar.getDate().year() - 1, month, 1);
	}
	else if(month > 12) {
		month = 1;
		date.setDate(calendar.getDate().year() + 1, month, 1);
	}
	else {
		date.setDate(calendar.getDate().year(), month, 1);
	}
	calendar.setDate(date);
	calendar.makeCalendar(ui, date);
}

void MomsCook::showContents(QDate date) {
	selectedContents->show();
}

void MomsCook::hideContents() {
	selectedContents->hide();
}

// Event
bool MomsCook::eventFilter(QObject* obj, QEvent* e) {
	switch (e->type()) {
	case QEvent::MouseButtonPress:
		SET_MOUSE_PRESS_EVENT(00)
		SET_MOUSE_PRESS_EVENT(01)
		SET_MOUSE_PRESS_EVENT(02)
		SET_MOUSE_PRESS_EVENT(03)
		SET_MOUSE_PRESS_EVENT(04)
		SET_MOUSE_PRESS_EVENT(05)
		SET_MOUSE_PRESS_EVENT(06)

		SET_MOUSE_PRESS_EVENT(07)
		SET_MOUSE_PRESS_EVENT(08)
		SET_MOUSE_PRESS_EVENT(09)
		SET_MOUSE_PRESS_EVENT(10)
		SET_MOUSE_PRESS_EVENT(11)
		SET_MOUSE_PRESS_EVENT(12)
		SET_MOUSE_PRESS_EVENT(13)

		SET_MOUSE_PRESS_EVENT(14)
		SET_MOUSE_PRESS_EVENT(15)
		SET_MOUSE_PRESS_EVENT(16)
		SET_MOUSE_PRESS_EVENT(17)
		SET_MOUSE_PRESS_EVENT(18)
		SET_MOUSE_PRESS_EVENT(19)
		SET_MOUSE_PRESS_EVENT(20)

		SET_MOUSE_PRESS_EVENT(21)
		SET_MOUSE_PRESS_EVENT(22)
		SET_MOUSE_PRESS_EVENT(23)
		SET_MOUSE_PRESS_EVENT(24)
		SET_MOUSE_PRESS_EVENT(25)
		SET_MOUSE_PRESS_EVENT(26)
		SET_MOUSE_PRESS_EVENT(27)

		SET_MOUSE_PRESS_EVENT(28)
		SET_MOUSE_PRESS_EVENT(29)
		SET_MOUSE_PRESS_EVENT(30)
		SET_MOUSE_PRESS_EVENT(31)
		SET_MOUSE_PRESS_EVENT(32)
		SET_MOUSE_PRESS_EVENT(33)
		SET_MOUSE_PRESS_EVENT(34)

		SET_MOUSE_PRESS_EVENT(35)
		SET_MOUSE_PRESS_EVENT(36)
		SET_MOUSE_PRESS_EVENT(37)
		SET_MOUSE_PRESS_EVENT(38)
		SET_MOUSE_PRESS_EVENT(39)
		SET_MOUSE_PRESS_EVENT(40)
		SET_MOUSE_PRESS_EVENT(41)
		break;
	case QEvent::MouseButtonRelease:
		break;
	default:
		break;
	}
	return QMainWindow::eventFilter(obj, e);;
}

