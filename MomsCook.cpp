#include "MomsCook.h"
#include <QMouseEvent>
#include <QUndoStack>
#include <string>

using namespace std;

#define SET_SHOW_EVENT(num)\
	connect(ui.days00, &QTextBrowser::mousePressEvent, [=]() {\
		handleDate(calendar.getDate());\
	});\

#define SET_HIDE_EVENT(num)\
	connect(ui.days00, &QTextBrowser::close, [=]() {\
		hideContents();\
	});\

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

void MomsCook::mousePressEvent(QMouseEvent* e)
{
	if (e->button() == Qt::LeftButton) {
		showContents(calendar.getDate());
	}
}
