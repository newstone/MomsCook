#pragma once

#include <QWidget>
#include "ui_AddContentsClass.h"
#include "ContentsClass.h"

class MYSQL;

class AddContentsClass : public QWidget
{
	Q_OBJECT
public:
	AddContentsClass(QWidget *parent = Q_NULLPTR);
	~AddContentsClass();

	ContentsClass* getContentsClass();
	void setSQL(MYSQL* c);
	void pushSaveButton(); 
	void radioFunction(int i);

	void updateFoodList();
private:
	Ui::AddContentsClass ui;
	ContentsClass* contentsClass;
	MYSQL* conn;

	int radioBtnIndex;
};
