#pragma once

#include <QWidget>
#include "ui_StatisticsClass.h"

class StatisticsClass : public QWidget
{
	Q_OBJECT

public:
	StatisticsClass(QWidget *parent = Q_NULLPTR);
	~StatisticsClass();

private:
	Ui::StatisticsClass ui;
};
