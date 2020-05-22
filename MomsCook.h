#pragma once
#include <QtWidgets/QMainWindow>
#include <QTextBrowser>
#include "ui_MomsCook.h"
#include "MyCalendar.h"
#include "AddContentsClass.h"

class MomsCook : public QMainWindow
{
	Q_OBJECT

public:
	MomsCook(QWidget *parent = Q_NULLPTR);
	virtual ~MomsCook();
	void init();
	void initDatabase();
signals:
	void clickTextBrowser(QTextBrowser* obj);
private slots:
	void handleButton(bool flag);
	void openAddContentsView();
	void openStatisticsView();
protected:
	virtual bool eventFilter(QObject* obj, QEvent* event) override;
	virtual void mouseMoveEvent(QMouseEvent* event) override;
	virtual void mousePressEvent(QMouseEvent* event) override;
	virtual void mouseReleaseEvent(QMouseEvent* event) override;
private:
	Ui::MomsCookClass ui;
	Calendar calendar;
	ContentsClass* selectedContents;
	AddContentsClass* addContents;

	MYSQL* conn;
	MYSQL_RES* res;

	bool isPressed;
};
