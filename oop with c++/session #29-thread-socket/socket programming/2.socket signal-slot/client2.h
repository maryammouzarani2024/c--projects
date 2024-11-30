#ifndef CLIENT2_H
#define CLIENT2_H

#include <QtWidgets/QWidget>
#include "ui_client2.h"
#include <QTcpSocket>
#include <QTextEdit>
#include <QPushButton>
#include <QVBoxLayout>
class client2 : public QWidget
{
	Q_OBJECT

public:
	client2(QWidget *parent = 0);
	~client2();

private:
	QTcpSocket *socket;
	QTextEdit *ted;
	QPushButton *pbn;
	QVBoxLayout *vbl; 
public slots:
	void connectingToServer();
	
	//for socket signals
	void	connected();
	void	disconnected();
	void	bytesWritten(qint64 bytes);
	void	readyRead();

};

#endif // CLIENT2_H
