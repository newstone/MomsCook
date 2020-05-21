#include "AddContentsClass.h"
#include "mysql.h"
#include <string>

using namespace std;

AddContentsClass::AddContentsClass(QWidget *parent)
	: QWidget(parent) , conn(nullptr), radioBtnIndex(-1)
{
	ui.setupUi(this);
	
	connect(ui.pushButton, &QPushButton::clicked, [=]() {
		pushSaveButton();
		});
	connect(ui.radioButton, &QPushButton::clicked, [=]() {
		radioFunction(0);
	});
	connect(ui.radioButton_2, &QPushButton::clicked, [=]() {
		radioFunction(1);
	});
	connect(ui.radioButton_3, &QPushButton::clicked, [=]() {
		radioFunction(2);
	});
}

AddContentsClass::~AddContentsClass()
{
}

void AddContentsClass::setSQL(MYSQL* c) {
	conn = c;
}

void AddContentsClass::pushSaveButton() {
	QString name = ui.lineEdit->text();
	if (radioBtnIndex == -1 || name.toStdString().size() == 0) {
		return;
	}

	string query = "INSERT INTO food VALUES ( \'";
	query += name.toStdString();
	query += "'\, ";
	query += to_string(radioBtnIndex);
	query += ")";
	
	int ret = mysql_query(conn, query.c_str());
	ui.lineEdit->clear();
	radioBtnIndex = -1;
	if (ui.radioButton->isChecked()) {
		ui.radioButton->setAutoExclusive(false);
		ui.radioButton->setChecked(false);
		ui.radioButton->setAutoExclusive(true);
	}
	else if (ui.radioButton_2->isChecked()) {
		ui.radioButton_2->setAutoExclusive(false);
		ui.radioButton_2->setChecked(false);
		ui.radioButton_2->setAutoExclusive(true);
	}
	else {
		ui.radioButton_3->setAutoExclusive(false);
		ui.radioButton_3->setChecked(false);
		ui.radioButton_3->setAutoExclusive(true);
	}

}

void AddContentsClass::radioFunction(int i)
{
	radioBtnIndex = i;
}
void AddContentsClass::updateFoodList() {
}