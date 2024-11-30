#ifndef GRBOXQT_H
#define GRBOXQT_H

#include <QtWidgets/QWidget>
#include "ui_grboxqt.h"
#include <QGroupBox>
#include <QVBoxLayout>
#include <QRadioButton>
#include <QGridLayout>
#include <QCheckBox>
#include <QPushButton>
class grBoxQt : public QWidget
{
	Q_OBJECT

public:
	grBoxQt(QWidget *parent = 0);
	~grBoxQt();

private:
	QGroupBox *gbox, *gbox1, *gbox2,*gbox3;
	QVBoxLayout *vl1,*vl2,*vl3,*vl4;
	QRadioButton *rd1, *rd2, *rd3;
	QRadioButton *rd4, *rd5, *rd6;

	

	QCheckBox *chb;
	QCheckBox  *chb1, *chb2, *chb3;
	
	QGridLayout *bgLayout;


	QPushButton *pbn, *pbn1, *pbn2,*popUpBtn;
};

#endif // GRBOXQT_H
