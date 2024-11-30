#include "client2.h"

client2::client2(QWidget *parent)
	: QWidget(parent)
{
	vbl = new QVBoxLayout();
	ted = new QTextEdit();
	vbl->addWidget(ted);
	pbn = new QPushButton("connect");
	pbn->setDefault(true);
	vbl->addWidget(pbn);
	connect(pbn , SIGNAL(clicked()), this, SLOT(connectingToServer()));



	setLayout(vbl);
}

client2::~client2()
{

}
void client2::connectingToServer(){
	socket = new QTcpSocket();
	socket->connectToHost("127.0.0.1", 80);
	ted->setText("connecting....");
	connect(socket, SIGNAL(connected()), this, SLOT(connected()));
	connect(socket, SIGNAL(disconnected()), this, SLOT(disconnected()));
	connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
	connect(socket, SIGNAL(bytesWritten(qint64)), this, SLOT(bytesWritten(qint64)));
	

}
void	client2::connected(){
	ted->append("Connected\n");
	socket->write("Hello server \n");
}
void	client2::disconnected()
{
	ted->append("disconnected\n"); // when it is called

}
void client2::bytesWritten(qint64 bytes){
	ted->append("we wrote ");
	ted->append(QString::number(bytes));
}
void	client2::readyRead(){
	QByteArray data = socket->readAll();
	ted->append(data);
}