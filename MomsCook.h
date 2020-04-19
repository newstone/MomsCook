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
private slots:
	void handleButton(bool flag);
	void showContents(const QDate& day);
	void hideContents();
protected:
	bool eventFilter(QObject* obj, QEvent* event) override;
private:
	Ui::MomsCookClass ui;
	Calendar calendar;
	ContentsClass* selectedContents;
};
