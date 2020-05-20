#pragma once

#include <QWidget>
#include "ui_AddContentsClass.h"

class MYSQL;

class AddContentsClass : public QWidget
{
	Q_OBJECT

public:
	AddContentsClass(QWidget *parent = Q_NULLPTR);
	~AddContentsClass();

	void setSQL(MYSQL* c);
private:
	Ui::AddContentsClass ui;
	MYSQL* conn;
};
