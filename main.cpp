#include "MomsCook.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MomsCook w;
	w.show();
	return a.exec();
}
