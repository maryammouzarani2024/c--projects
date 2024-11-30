#include "grboxqt.h"
#include <QMenu>

grBoxQt::grBoxQt(QWidget *parent)
	: QWidget(parent)
{
	setWindowTitle("Group Boxes");
	bgLayout = new QGridLayout();
	setLayout(bgLayout);
	//bgLayout->setSizeConstraint(QLayout::SetFixedSize);

	//First Square
	gbox = new QGroupBox();
	gbox->setTitle(tr("Exclusive Radio Buttons"));
	

	vl1 = new QVBoxLayout();
	rd1 = new QRadioButton(tr("&Radio Button1"));
	vl1->addWidget(rd1);

	rd2 = new QRadioButton(tr("Ra&dio Button2"));
	vl1->addWidget(rd2);

	rd3 = new QRadioButton(tr("R&adio Button3"));
	rd3->setChecked(true);

	vl1->addWidget(rd3);
	vl1->addStretch(1);
	gbox->setLayout(vl1);
	bgLayout->addWidget(gbox,0,0);
	
	//End of the First Square

	//Second Square
	gbox1 = new QGroupBox();
	gbox1->setTitle(tr("E&xclusive Radio Button"));
	gbox1->setCheckable(true);
	gbox1->setChecked(false);

	vl2 = new QVBoxLayout();
	rd3 = new QRadioButton(tr("Rad&io Button3"));
	vl2->addWidget(rd3);

	rd4 = new QRadioButton("Radi&o Button2");
	vl2->addWidget(rd4);

	chb = new QCheckBox("Ind&ependent checkbox");
	chb->setChecked(true);
	vl2->addWidget(chb);
	vl2->addStretch(1);
	gbox1->setLayout(vl2);
	bgLayout->addWidget(gbox1,1,0);
	
	//End of the Second Square


	//Third Square
	gbox2 = new QGroupBox("Non-exclusive checkboxes");
	vl3 = new QVBoxLayout();
	chb1 = new QCheckBox(tr("&Checkbox 1"));
	vl3->addWidget(chb1);


	chb2 = new QCheckBox(tr("C&heckbox 2"));
	chb2->setChecked(true);
	vl3->addWidget(chb2);

	chb3 = new QCheckBox(tr("Tri-&state button"));
	chb3->setTristate(true);
	chb3->setCheckState(Qt::PartiallyChecked);
	vl3->addWidget(chb3);
	vl3->addStretch(1);

	gbox2->setLayout(vl3);
	bgLayout->addWidget(gbox2, 0, 1);


	//Forth Square
	gbox3 = new QGroupBox(tr("&Push Buttons"));
	vl4 = new QVBoxLayout();
	gbox3->setLayout(vl4);
	gbox3->setCheckable(true);
	gbox3->setChecked(true);
	pbn = new QPushButton(tr("&Normal Button"));
	vl4->addWidget(pbn);
	pbn1 = new QPushButton(tr("&Toggle Button"));
	pbn1->setCheckable(true);
	pbn1->setChecked(true);
	vl4->addWidget(pbn1);
	pbn2 = new QPushButton(tr("Flat Button"));
	pbn2->setFlat(true);
	vl4->addWidget(pbn2);

	
	

	popUpBtn = new QPushButton("Pop-&up Button");
	vl4->addWidget(popUpBtn);
	
	QMenu *menu = new QMenu();
	menu->addAction("First item");
	menu->addAction("Second item");
	menu->addAction("Third item");
	menu->addAction("Fourth item");
	popUpBtn->setMenu(menu);

	QMenu *subM=menu->addMenu("Sub-menu");
	subM->addAction("Item 1");
	subM->addAction("Item 2");
	subM->addAction("Item 3");

	bgLayout->addWidget(gbox3, 1, 1);
}

grBoxQt::~grBoxQt()
{

}
