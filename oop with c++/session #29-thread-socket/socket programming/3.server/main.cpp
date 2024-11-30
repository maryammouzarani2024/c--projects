
#include <QtCore/QCoreApplication>
#include "serverClass.h"
int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);
	serverClass s;
	s.setServer();
	return a.exec();
}
