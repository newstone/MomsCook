#include "MyCalendar.h"
#include "ui_MomsCook.h"
#include "MyTextBrowser.h"
#include "mysql.h"

Calendar::Calendar(): conn(nullptr) {
	selectedDay = QDate::currentDate();
}

Calendar::~Calendar() {
}
void Calendar::setDate(const QDate& date) {
	selectedDay = date;
}
void Calendar::setMYSQL(MYSQL* c) {
	conn = c;
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

	for (unsigned int i = 0; i < CONTENTS_COUNT; ++i) {
		contents[i].reset();
	}

	string query = "SELECT * FROM menu WHERE date(date) BETWEEN \'";
	query += to_string(date.year());
	query += "-";
	if (date.month() / 10 == 0) {
		query += "0";
	}
	query += to_string(date.month());
	query += "-01\' AND \'";
	int nextMonth = date.month() + 1;
	if (nextMonth > 12) {
		query += to_string(date.year() + 1);
		query += "-01";
	}
	else {
		query += to_string(date.year());
		query += "-";
		if (nextMonth / 10 == 0) {
			query += "0";
		}
		query += to_string(nextMonth);
	}
	query += "-01\'";

	int result = mysql_query(conn, query.c_str());
	MYSQL_RES* sql_result = nullptr;
	MYSQL_ROW sql_row;

	if (result == 0) {
		sql_result = mysql_store_result(conn);
		while((sql_row = mysql_fetch_row(sql_result)) != nullptr) {
			string currDate = sql_row[0];
			int currDay = atoi(&currDate[8]);
			for (unsigned int i = 0; i < 5; ++i) {
				contents[currDay - 1].setDish(static_cast<DISH_TYPE>(i), QString::fromUtf8(sql_row[i + 1]));
			}
		}
		mysql_free_result(sql_result);
	}
}

void Calendar::makeCalendar(Ui::MomsCookClass& ui, QList<MyTextBrowser*>& days, const QDate& date) {
	string textMonth = to_string(date.year()) + "." + to_string(date.month());
	ui.textMonth->setFontPointSize(13);
	ui.textMonth->setFontWeight(QFont::Bold);
	ui.textMonth->setText(QString::fromStdString(textMonth));
	ui.textMonth->setAlignment(Qt::AlignCenter);
	int startDate = date.dayOfWeek();
	int currDate = 1;
	int realDate = 1;
	int y = date.year();
	int mo = date.month();

	for (unsigned int i = 0; i < DAYS; ++i) {
		if (startDate <= currDate) {
				if (QDate::isValid(y, mo, realDate)) {
					QString strContents = QString::fromStdString(to_string(realDate++));
					strContents += "\n";
					strContents += contents[realDate - 2].getContentsString();
					days[i]->setText(strContents);
				} else {
					days[i]->setText("");
				}
		} else {
				++currDate;
				days[i]->setText("");
		}
	}
}
