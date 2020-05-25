#include <QMouseEvent>
#include <string>
#include <QDate>

#include "MyTextBrowser.h"
#include "Contents.h"
#include "MyCalendar.h"
#include "ContentsClass.h"

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

MyTextBrowser::MyTextBrowser(QWidget* widget) : QTextBrowser(widget), calendar(nullptr), selectedContents(nullptr){
}
MyTextBrowser::~MyTextBrowser() {
}

void MyTextBrowser::keyPressEvent(QKeyEvent* ev) {
}
void MyTextBrowser::mouseMoveEvent(QMouseEvent* ev) {
}
void MyTextBrowser::mousePressEvent(QMouseEvent* ev) {
	switch (ev->button())
	{
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		selectDay();
		break;
	default:
		break;
	}
}
void MyTextBrowser::mouseReleaseEvent(QMouseEvent* ev) {
	switch (ev->button())
	{
	case Qt::RightButton:
		break;
	case Qt::LeftButton:
		break;
	default:
		break;
	}
}
void MyTextBrowser::showContents(const QDate& date) {

	selectedContents->getDateTextBrowser()->clear();
	int day = date.day();
	int month = date.month();
	int year = date.year();
	string strDate = "날짜: " + to_string(year) + "년 " + to_string(month) + "월 " + to_string(day) + "일";

	selectedContents->getDateTextBrowser()->setText(QString::fromLocal8Bit(strDate.c_str()));
	Contents* content = calendar->getContent(date.day() - 1);

	selectedContents->getContentsTextBrowser()->setText(content->getContentsString());
	selectedContents->show();
}
void MyTextBrowser::selectDay() {
	int day = getNumberFromString(this->toPlainText().toStdString());
	selectedContents->setDateIndex(day - 1);
	if (day == 0) {
		selectedContents->hide();
		return;
	}
	selectedContents->resetSavedDishes();
	QDate date = calendar->getDate();
	date.setDate(date.year(), date.month(), day);
	calendar->setDate(date);
	showContents(date);
}

void MyTextBrowser::setSelectedContent(ContentsClass* contentsClass) {
	if (contentsClass != nullptr) {
		selectedContents = contentsClass;
	}
}
void MyTextBrowser::setCalendar(Calendar* c) {
	if (c != nullptr) {
		calendar = c;
	}
}

QDate MyTextBrowser::getDate() {
	return calendar->getDate();
}