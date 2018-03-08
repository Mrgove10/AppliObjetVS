#include "AppObjetQT.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	AppObjetQT w;
	w.show();
	return a.exec();
}
