#pragma once

#include <QWidget>
#include "ui_ContentsClass.h"

class ContentsClass : public QWidget
{
	Q_OBJECT

public:
	ContentsClass(QWidget *parent = Q_NULLPTR);
	~ContentsClass();

private:
	Ui::ContentsClass ui;
};
