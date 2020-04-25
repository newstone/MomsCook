#include "MomsCook.h"
#include <QMouseEvent>
#include <QUndoStack>
#include <string>

using namespace std;


int getNumberFromString(const string& s) {
	int result = 0;
	if (isdigit(s[0])) {
		result += (s[0] - '0');
		if (isdigit(s[1])) {
			result *= 10;
			result += (s[1] - '0');
		}
	}
	return result;
}

//////////////////////////////////////////////////////////////////////

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
	selectedContents->setContents(calendar.getContents());
	for (unsigned int i = 0; i < DAYS; ++i) {
		ui.days[i]->installEventFilter(this);
	}
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
	calendar.reloadContents(date);
	calendar.setDate(date);
	calendar.makeCalendar(ui, date);
}

void MomsCook::showContents(const QDate& date) {
	
	selectedContents->getDateTextBrowser()->clear();
	int day = date.day();
	int month = date.month();
	int year = date.year();
	string strDate = "날짜: " + to_string(year) + "년 " + to_string(month) + "월 " + to_string(day) + "일";

	selectedContents->getDateTextBrowser()->setText(QString::fromLocal8Bit(strDate.c_str()));
	Contents& content = calendar.getContent(date.day() - 1);

	selectedContents->getContentsTextBrowser()->setText(QString::fromLocal8Bit(content.getDishs().c_str()));
	selectedContents->show();
}

void MomsCook::hideContents() {
	selectedContents->hide();
}

// Event
bool MomsCook::eventFilter(QObject* obj, QEvent* e) {
	switch (e->type()) {
	case QEvent::MouseButtonRelease:
		break;
	case QEvent::MouseButtonPress:
		for (unsigned int i = 0; i < DAYS; ++i) {
			if (obj == ui.days[i]) {
				selectedContents->setDateIndex(i);
				int day = getNumberFromString(ui.days[i]->toPlainText().toStdString());
				if (day == 0)
					break;
				QDate date = calendar.getDate();
				date.setDate(date.year(), date.month(), day);
				showContents(date);
				break;
			}
		}
		break;
	default:
		break;
	}
	return QMainWindow::eventFilter(obj, e);;
}

