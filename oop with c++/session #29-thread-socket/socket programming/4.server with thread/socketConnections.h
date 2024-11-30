#pragma once
#include "qobject.h"
#include <thread>
#include <QTcpSocket>
using namespace std;
class socketConnections :
	public QObject
{
	Q_OBJECT
public:
	socketConnections(int, QObject* parent = 0);
	~socketConnections();
	void newSocketEstablish();
private:
	std::thread t;
	QTcpSocket *socket;
	int socketID;
	public slots:
// 	void readyRead();
// 	void bytesWritten(qint64);
// 	void disconnected();

};

