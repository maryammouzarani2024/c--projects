#include "serverClass.h"

#include <QDebug>

serverClass::serverClass(QObject * parent) :QObject(parent)
{
	
}
void serverClass::setServer(){
	server = new QTcpServer(this);
	server->listen(QHostAddress::Any, 1025); //1024
	qDebug() << "listening....";
	//server->waitForNewConnection(1000);
	connect(server, SIGNAL(newConnection()), this, SLOT(serverNewConnection()));
}

serverClass::~serverClass()

{
	
}

void serverClass::serverNewConnection(){
	QTcpSocket * s = server->nextPendingConnection();
	qDebug() << "new client connection id: " << s->socketDescriptor();
	socketConnections *ss = new socketConnections(s->socketDescriptor());
		connections.push_back(ss);

		//server->nextPendingConnection();


// 	qDebug()<<"new socket id= "<<serverSocket->socketDescriptor();
// 	connect(serverSocket, SIGNAL(readyRead()), this, SLOT(serverReadyRead()));
// 	connect(serverSocket, SIGNAL(bytesWritten(qint64)), this, SLOT(serverBytesWritten(qint64)));
// 	connect(serverSocket, SIGNAL(disconnected()), this, SLOT(serverDisconnected()));

}
// void serverClass::serverReadyRead(){
// 	qDebug()<<serverSocket->readAll();
// 	serverSocket->write("Hello Client\n");
// 	_sleep(7983492387);
// 
// 
// }
// void serverClass::serverBytesWritten(qint64){
// 	qDebug() << "server wrote Hello";
// }
// void serverClass::serverDisconnected(){
// 	 	qDebug() << "disconnected";
//}
