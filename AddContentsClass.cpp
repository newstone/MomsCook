#include "AddContentsClass.h"
#include "mysql.h"
#include <string>

using namespace std;

AddContentsClass::AddContentsClass(QWidget *parent)
	: QWidget(parent) , conn(nullptr), radioBtnIndex(-1), contentsClass(nullptr)
{
	contentsClass = new ContentsClass();
	ui.setupUi(this);
	listViews.append(this->findChild<QListWidget*>("listWidget_1"));
	listViews.append(this->findChild<QListWidget*>("listWidget_2"));
	listViews.append(this->findChild<QListWidget*>("listWidget_3"));
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

AddContentsClass::~AddContentsClass() {
	if(contentsClass)
		delete contentsClass;
}
ContentsClass* AddContentsClass::getContentsClass() {
	return contentsClass;
}
void AddContentsClass::setSQL(MYSQL* c) {
	conn = c;
	updateFoodList();
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
	updateFoodList();
}

void AddContentsClass::radioFunction(int i)
{
	radioBtnIndex = i;
}
void AddContentsClass::updateFoodList() {
	string query = "SELECT * FROM food ";
	int result = mysql_query(conn, query.c_str());
	MYSQL_RES* sql_result = nullptr;
	MYSQL_ROW sql_row;

	for (int i = 0; i < 3; ++i) {
		listViews[i]->clear();
	}

	if (result == 0) {
		sql_result = mysql_store_result(conn);
		while ((sql_row = mysql_fetch_row(sql_result)) != nullptr) {
			listViews[atoi(sql_row[1])]->addItem(QString::fromUtf8(sql_row[0]));
		}
	}

	contentsClass->loadData();
	mysql_free_result(sql_result);
}