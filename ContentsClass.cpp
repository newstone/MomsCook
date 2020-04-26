#include "ContentsClass.h"
#include "Contents.h"

ContentsClass::ContentsClass(QWidget *parent)
	: QWidget(parent), contents(nullptr), dateIndex(0), currRice(""), currSoup(""), updateFlag(false){
	ui.setupUi(this);
	loadData();
	QObject::connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(saveDish()));
	for (int i = 0; i < CONTENTS_TYPE; ++i) {
		currSide[i] = "";
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

bool ContentsClass::isUpdated() {
	if (updateFlag) {
		updateFlag = false;
		return true;
	}
	return false;
}
bool ContentsClass::setSide(const string& side) {
	for (unsigned int i = 0; i < 3; ++i) {
		if (currSide[i] == "") {
			currSide[i] = side;
			return true;
		}
	}
	return false;
}

void ContentsClass::SetContentsText(string& contentsText) {
	contentsText += "====================\n";
	contentsText += "밥: ";
	contentsText += currRice;
	contentsText += "\n";
	contentsText += "국: ";
	contentsText += currSoup;
	contentsText += "\n";
	contentsText += "반찬1: ";
	contentsText += currSide[0];
	contentsText += "\n";
	contentsText += "반찬2: ";
	contentsText += currSide[1];
	contentsText += "\n";
	contentsText += "반찬3: ";
	contentsText += currSide[2];
	contentsText += "\n";
}
void ContentsClass::resetSavedDishes() {
	currRice = "";
	currSoup = "";
	currSide[0] = "";
	currSide[1] = "";
	currSide[2] = "";
}
void ContentsClass::clickedDish() {
	ui.contentsTextBrowser->clear();
	DISH_TYPE type = static_cast<DISH_TYPE>(ui.tabWidget->currentIndex());
	switch (type)
	{
	case DISH_TYPE::RICE:
		currRice = ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString();
		break;
	case DISH_TYPE::SOUP:
		currSoup = ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString();
		break;
	default:
		setSide(ui.listViews[ui.tabWidget->currentIndex()]->currentItem()->text().toStdString());
		break;
	}
	string contentsText = "";
	SetContentsText(contentsText);
	ui.contentsTextBrowser->setText(QString::fromLocal8Bit(contentsText.c_str()));
	ui.contentsTextBrowser->update();
}

void ContentsClass::saveDish() {
	contents[dateIndex].SetDish(DISH_TYPE::RICE, currRice);
	contents[dateIndex].SetDish(DISH_TYPE::SOUP, currSoup);
	contents[dateIndex].SetDish(DISH_TYPE::SIDE1, currSide[0]);
	contents[dateIndex].SetDish(DISH_TYPE::SIDE2, currSide[1]);
	contents[dateIndex].SetDish(DISH_TYPE::SIDE3, currSide[2]);
	updateFlag = true;

	this->close();
}