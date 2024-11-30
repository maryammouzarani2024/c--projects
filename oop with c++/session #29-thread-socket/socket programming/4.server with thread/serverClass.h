#pragma once
#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include "socketConnections.h"
#include <vector>
using namespace std;
class serverClass :
	public QObject
{
	Q_OBJECT
public:
	serverClass(QObject * parent = 0);
	void setServer();
	~serverClass();
private:
	QTcpServer *server;
	//QTcpSocket *serverSocket;
	vector<socketConnections*> connections;
	
public slots:
	void serverNewConnection();

	//socket slots
// 	void serverReadyRead();
// 	void serverBytesWritten(qint64);
// 	void serverDisconnected();

};

