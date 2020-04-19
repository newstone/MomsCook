#include "ContentsClass.h"

ContentsClass::ContentsClass(QWidget *parent)
	: QWidget(parent){
	ui.setupUi(this);
}

ContentsClass::~ContentsClass(){
}

QTextBrowser* ContentsClass::getDateTextBrowser() {
	return ui.dateTextBrowser;
}

QTextBrowser* ContentsClass::getContentsTextBrowser() {
	return ui.contentsTextBrowser;
}