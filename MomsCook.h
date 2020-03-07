#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MomsCook.h"

class MomsCook : public QMainWindow
{
	Q_OBJECT

public:
	MomsCook(QWidget *parent = Q_NULLPTR);

private:
	Ui::MomsCookClass ui;
};
