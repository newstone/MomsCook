#pragma once

#include <QWidget>
#include "ui_ContentsClass.h"

class ContentsClass : public QWidget
{
	Q_OBJECT

public:
	ContentsClass(QWidget *parent = Q_NULLPTR);
	~ContentsClass();
	void loadData();

	QTextBrowser* getDateTextBrowser();
	QTextBrowser* getContentsTextBrowser();

private:
	Ui::ContentsClass ui;
};
