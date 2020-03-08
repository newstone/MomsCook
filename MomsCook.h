#pragma once
#include <QtWidgets/QMainWindow>
#include <QTextBrowser>
#include "MyCalendar.h"
#include "ui_MomsCook.h"

class MomsCook : public QMainWindow
{
	Q_OBJECT

public:
	MomsCook(QWidget *parent = Q_NULLPTR);
	void init();
	void makeCalendar();
private:
	Ui::MomsCookClass ui;
	Calendar calendar;
};
