#pragma once
#include <QTcpServer>
#include <QTcpSocket>
class serverClass :
	public QObject
{
	Q_OBJECT
public:
	serverClass(QObject *parent=0);
	~serverClass();
	void setServer();
private:
	QTcpServer *server;
	QTcpSocket *socket;

public slots:
void	connected();
void	disconnected();
void	bytesWritten(qint64 bytes);
void	readyRead();
void	newConnectionSlot();
};

