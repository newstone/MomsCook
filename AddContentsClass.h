#pragma once

#include <QWidget>
#include "ui_AddContentsClass.h"

class AddContentsClass : public QWidget
{
	Q_OBJECT

public:
	AddContentsClass(QWidget *parent = Q_NULLPTR);
	~AddContentsClass();

private:
	Ui::AddContentsClass ui;
};
