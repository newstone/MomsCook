#pragma once

#include <QWidget>
#include "ui_ContentsClass.h"

class Contents;

class ContentsClass : public QWidget
{
	Q_OBJECT

public:
	ContentsClass(QWidget *parent = Q_NULLPTR);
	~ContentsClass();
	void setDateIndex(unsigned int idx);
	void setContents(Contents* contents);
	void loadData();

	QTextBrowser* getDateTextBrowser();
	QTextBrowser* getContentsTextBrowser();
private slots:
	void clickedDish();
private:
	Ui::ContentsClass ui;
	Contents* contents;
	int dateIndex;
};
