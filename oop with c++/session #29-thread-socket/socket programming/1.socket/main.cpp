#include "qtcl.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	qtcl w;
	w.show();
	return a.exec();
}
