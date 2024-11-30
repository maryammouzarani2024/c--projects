#ifndef QTCL_H
#define QTCL_H

#include <QtWidgets/QWidget>
#include "ui_qtcl.h"
#include <QTcpSocket>
#include <QVBoxLayout>
#include <QPushButton>
#include <QTextEdit>
class qtcl : public QWidget
{
	Q_OBJECT

public:
	qtcl(QWidget *parent = 0);
	~qtcl();
private:
	QTcpSocket  *clientSocket;
	QTextEdit *ted;
	QVBoxLayout *vbl;
	QPushButton *pbn;
	public slots:
	void connecting();

	
};

#endif // QTCL_H
