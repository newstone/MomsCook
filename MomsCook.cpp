#include "MomsCook.h"
#include <QMouseEvent>
#include <QUndoStack>
#include <string>
#include <iostream>

using namespace std;

//////////////////////////////////////////////////////////////////////

MomsCook::MomsCook(QWidget *parent)
	: selectedContents(nullptr), QMainWindow(parent), isPressed(false)
{
	ui.setupUi(this);
	selectedContents = new ContentsClass();

	selectedContents->setContentsText(&calendar);
	selectedContents->hide();
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
		ui.days[i]->setSelectedContent(selectedContents);
		ui.days[i]->setCalendar(&calendar);
	}
}
MomsCook::~MomsCook() {
	if(selectedContents)
		delete selectedContents;
	if (conn)
		mysql_close(conn);
}

void MomsCook::init() {
	QDate date;
	initDatabase();
	date.setDate(calendar.getDate().year(), calendar.getDate().month(), 1);
	calendar.setMYSQL(conn);
	calendar.reloadContents(date);
	calendar.makeCalendar(ui, date);
	selectedContents->setContents(calendar.getContents());
	selectedContents->setMYSQL(conn);
	addContents = selectedContents->getAddContentsClass();
	this->installEventFilter(this);
}

void MomsCook::initDatabase() {
	conn = mysql_init(nullptr);
	if (!conn) {
		assert();
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
}
void MomsCook::openStatisticsView() {
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
			calendar.makeCalendar(ui, date);
		}
		break;
	}
	return QMainWindow::eventFilter(obj, e);
}

