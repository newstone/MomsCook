#pragma once

#include <QWidget>
#include "ui_AdContentsClass.h"

class AdContentsClass : public QWidget
{
	Q_OBJECT

public:
	AdContentsClass(QWidget *parent = Q_NULLPTR);
	~AdContentsClass();

private:
	Ui::AdContentsClass ui;
};
