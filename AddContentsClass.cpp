#include "AddContentsClass.h"
#include "mysql.h"

AddContentsClass::AddContentsClass(QWidget *parent)
	: QWidget(parent) , conn(nullptr)
{
	ui.setupUi(this);
}

AddContentsClass::~AddContentsClass()
{
}

void AddContentsClass::setSQL(MYSQL* c) {
	conn = c;
}
