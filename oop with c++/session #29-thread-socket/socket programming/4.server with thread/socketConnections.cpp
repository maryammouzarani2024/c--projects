#include "socketConnections.h"


socketConnections::socketConnections( int _socketID, QObject *parent) :QObject(parent)
{
	socketID = _socketID;
	t = std::thread(&socketConnections::newSocketEstablish, this);

}

void socketConnections::newSocketEstablish(){
	socket = new  QTcpSocket();
	qDebug() << "new connection:  " << socketID;
	
		if (socket->setSocketDescriptor(socketID)){
			while (true){
				while (!socket->waitForReadyRead(-1));
				qDebug() << socket->readAll();
				socket->write("Hello Client\n");
				socket->waitForBytesWritten(-1);
			}
		}
		else{
			qDebug() << "could not bind the socket";
			return;
		}
	
}
socketConnections::~socketConnections()
{
	qDebug() << "Destroy an object";
	t.join();
}


// 
// void socketConnections::readyRead(){
// 	qDebug() << socket.readAll();
// 	socket.write("Hello Client\n");
// 
// 
// }
// void socketConnections::bytesWritten(qint64){
// 	qDebug() << "server wrote Hello";
// }
// void socketConnections::disconnected(){
// 	qDebug() << "disconnected";
// }