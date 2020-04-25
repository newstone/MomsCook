#include "ContentsClass.h"
#include <string>
#include "Contents.h"

ContentsClass::ContentsClass(QWidget *parent)
	: QWidget(parent), contents(nullptr), dateIndex(0){
	ui.setupUi(this);
	loadData();
	for (int i = 0; i < CONTENTS_TYPE; ++i) {
		QObject::connect(ui.listViews[i], SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(clickedDish()));
	}
}

ContentsClass::~ContentsClass(){
}
void ContentsClass::setDateIndex(unsigned int idx) {
	dateIndex = idx;
}
QTextBrowser* ContentsClass::getDateTextBrowser() {
	return ui.dateTextBrowser;
}

QTextBrowser* ContentsClass::getContentsTextBrowser() {
	return ui.contentsTextBrowser;
}
void ContentsClass::setContents(Contents* contents) {
	if (contents != nullptr) {
		this->contents = contents;
	}
}

void ContentsClass::loadData() {
	for (unsigned int i = 0; i < 3; ++i) {
		int size = 100;
		std::string contentsName = "contents";
		for (unsigned int c = 0; c < size; ++c) {
			ui.listViews[i]->addItem((contentsName + std::to_string(c)).c_str());
		}
	}
}

void ContentsClass::clickedDish()
{
	ui.contentsTextBrowser->clear();
	DISH_TYPE type = static_cast<DISH_TYPE>(ui.tabWidget->currentIndex());
	switch (type)
	{
	case DISH_TYPE::RICE:
		contents[dateIndex].SetDish(DISH_TYPE::RICE, ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString());
		break;
	case DISH_TYPE::SOUP:
		contents[dateIndex].SetDish(DISH_TYPE::SOUP, ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString());
		break;
	default:
		contents[dateIndex].SetDish(DISH_TYPE::SIDE1, ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString());
		break;
	}
	ui.contentsTextBrowser->setText(QString::fromLocal8Bit(contents[dateIndex].getDishs().c_str()));
	ui.contentsTextBrowser->update();
}