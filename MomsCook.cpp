#include "MomsCook.h"
#include <QMouseEvent>
#include <QUndoStack>
#include <string>
#include <iostream>

using namespace std;

#define CALENDAR_WIDTH 153
#define CALENDAR_HEIGHT 141

//////////////////////////////////////////////////////////////////////

MomsCook::MomsCook(QWidget *parent)
	: selectedContents(nullptr), QMainWindow(parent), isPressed(false), addContents(nullptr)
{
	ui.setupUi(this);
	days = this->findChildren<MyTextBrowser*>(QRegularExpression("days_\\d+$"));
	QSize size;
	size.setWidth(CALENDAR_WIDTH);
	size.setHeight(CALENDAR_HEIGHT);
	for (int i = 0; i < DAYS; ++i) {
		days[i]->setFixedSize(size);
	}
	ui.scrollAreaWidgetContents->setLayout(ui.verticalLayout);
	
	addContents = new AddContentsClass();
	addContents->hide();
	statisticsClass = new StatisticsClass();
	statisticsClass->hide();

	selectedContents = addContents->getContentsClass();
	selectedContents->setContentsText(&calendar);
	connect(ui.prevButton, &QPushButton::clicked, [=]() {
		handleButton(false);
		});
	connect(ui.nextButton, &QPushButton::clicked, [=]() {
		handleButton(true);
		});
	connect(ui.addMenuButton, &QPushButton::clicked, [=]() {
		openAddContentsView();
		});
	connect(ui.statisticsButton, &QPushButton::clicked, [=]() {
		openStatisticsView();
		});
	init();
	for (unsigned int i = 0; i < DAYS; ++i) {
		
		days[i]->setSelectedContent(selectedContents);
		days[i]->setCalendar(&calendar);
	}
}
MomsCook::~MomsCook() {
	if(addContents)
		delete addContents;
	if (conn)
		mysql_close(conn);
	if (addContents) {
		delete addContents;
	}
	if (statisticsClass) {
		delete statisticsClass;
	}
}

void MomsCook::init() {
	QDate date;
	initDatabase();
	date.setDate(calendar.getDate().year(), calendar.getDate().month(), 1);
	calendar.setMYSQL(conn);
	calendar.reloadContents(date);
	calendar.makeCalendar(ui, days, date);
	selectedContents->setContents(calendar.getContents());
	addContents->setSQL(conn);
	this->installEventFilter(this);
}

void MomsCook::initDatabase() {
	conn = mysql_init(nullptr);
	if (!conn) {
		assert(false);
	}
	conn = mysql_real_connect(conn, "localhost", "root", "Wja896523", "dish", 3306, (char*)NULL, 0);
	if (conn) {
		std::cout << "Connect Success!" << std::endl;
	}
	else {
		std::cout << "Connect Fail!" << std::endl;
	}
}
void MomsCook::openAddContentsView() {
	addContents->setVisible(true);
	addContents->activateWindow();
	addContents->raise();
}
void MomsCook::openStatisticsView() {
	statisticsClass->setVisible(true);
	statisticsClass->activateWindow();
	statisticsClass->raise();
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
	calendar.makeCalendar(ui, days, date);
}


void MomsCook::mouseMoveEvent(QMouseEvent* event) {
	switch (event->buttons())
	{
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		break;
	default:
		break;
	}
}
void MomsCook::mousePressEvent(QMouseEvent* event) {
	switch (event->button())
	{
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		isPressed = true;
		break;
	default:
		break;
	}
}

void MomsCook::mouseReleaseEvent(QMouseEvent* event) {
	switch (event->buttons())
	{
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		isPressed = true;
		break;
	default:
		break;
	}
}
// Event
bool MomsCook::eventFilter(QObject* obj, QEvent* e) {
	QMouseEvent* mouseEvent = static_cast<QMouseEvent*>(e);
	switch (mouseEvent->button()) {
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		break;
	default:
		if (selectedContents->isUpdated() && !selectedContents->isVisible()) {
			QDate date = calendar.getDate();
			calendar.reloadContents(date);
			date.setDate(date.year(), date.month(), 1);
			calendar.makeCalendar(ui, days, date);
		}
		break;
	}
	return QMainWindow::eventFilter(obj, e);
}

