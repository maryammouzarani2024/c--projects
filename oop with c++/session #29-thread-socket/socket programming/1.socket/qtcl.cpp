#include "qtcl.h"

qtcl::qtcl(QWidget *parent)
	: QWidget(parent)
{

	clientSocket = new QTcpSocket();
	ted = new QTextEdit();
	vbl = new QVBoxLayout();
	pbn = new QPushButton("ok");
	pbn->setDefault(true);
	setLayout(vbl);
	vbl->addWidget(ted);
	vbl->addWidget(pbn);
	connect(pbn, SIGNAL(clicked()), this, SLOT(connecting()));
}

qtcl::~qtcl()
{

}
void qtcl::connecting(){
	clientSocket->connectToHost("127.0.0.1", 80);
	ted->setText("connecting...\n");
	if (clientSocket->waitForConnected(2000)){
		ted->append("successful\n");
		clientSocket->write("Hello\n");
		ted->append("\n sending request");
		clientSocket->waitForBytesWritten(3000);
		while (!clientSocket->waitForReadyRead(-1));
			QByteArray data = clientSocket->readAll();
			ted->append(data);
		
	}

}