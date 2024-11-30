#pragma once
class Field
{
protected:
	int end_line;
public:
	Field(int endLine=0);
	virtual int check_place(int& x, int& y)=0;
	virtual ~Field();
};

class rectField :public Field{
	int length, width;
public: 
	rectField(int len, int wid, int endline);
	int check_place(int &x, int &y);
};
class circleField :public Field{
	int radius;
	circleField(int rad, int endline);
	int check_place(int &x, int &y);
};

