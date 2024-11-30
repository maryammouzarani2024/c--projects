#include "serverClass.h"
#include <QDebug>

serverClass::serverClass(QObject *parent) :QObject(parent)
{
	
	
}
void serverClass::setServer(){
	server = new QTcpServer(this);
	server->listen(QHostAddress::Any, 1025);
	if (!server->isListening())
	{
		qDebug() << "not listening. There is a problem";
	}
	connect(server, SIGNAL(newConnection()), this, SLOT(newConnectionSlot()));
	qDebug() << "Listening...";
// 	//while (true){
// 		if (server->waitForNewConnection(-1)){
// // 			socket = server->nextPendingConnection();
// // 			qDebug() <<"new socket: "<<socket->socketDescriptor();
// // 			connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
// // 			connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
// // 			connect(socket, SIGNAL(connected()), this, SLOT(connected()));
// 		}
// 	//}
// 		server->close();
}

void serverClass::newConnectionSlot()
{
	socket = server->nextPendingConnection();
	qDebug() << "new socket: " << socket->socketDescriptor();
	connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
	connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
	connect(socket, SIGNAL(connected()), this, SLOT(connected()));
}

serverClass::~serverClass()
{
}
void serverClass::connected(){
	qDebug()<<"Connected\n";
	
}
void	serverClass::disconnected()
{
	qDebug()<<"disconnected\n"; // when it is called

}
void serverClass::bytesWritten(qint64 bytes){
	qDebug()<<"we wrote ";
	qDebug()<<bytes;
}
void	serverClass::readyRead(){
		QByteArray data=socket->readAll();
		qDebug() << "received: " << data;
	socket->write("Hello Client \n");
}