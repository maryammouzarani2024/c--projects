#include "grboxqt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	grBoxQt w;
	w.show();
	return a.exec();
}
