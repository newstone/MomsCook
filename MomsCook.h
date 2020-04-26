#pragma once
#include <QtWidgets/QMainWindow>
#include <QTextBrowser>
#include "ui_MomsCook.h"
#include "MyCalendar.h"
#include "ContentsClass.h"

class MomsCook : public QMainWindow
{
	Q_OBJECT

public:
	MomsCook(QWidget *parent = Q_NULLPTR);
	virtual ~MomsCook();
	void init();
signals:
	void clickTextBrowser(QTextBrowser* obj);
private slots:
	void handleButton(bool flag);
	void selectDay(QTextBrowser* obj);
	void showContents(const QDate& day);
protected:
	virtual bool eventFilter(QObject* obj, QEvent* event) override;
private:
	Ui::MomsCookClass ui;
	Calendar calendar;
	ContentsClass* selectedContents;
};
