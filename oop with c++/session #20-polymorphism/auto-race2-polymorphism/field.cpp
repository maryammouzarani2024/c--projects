#include "field.h"


Field::Field(int endLine)
{
	end_line = endLine;

}


Field::~Field()
{
}
rectField::rectField(int len, int wid, int endline):Field(endline){
	length = len;
	width = wid;
}
int rectField::check_place(int &x, int &y)
{
	int finish = 0;
	if (x > end_line)
		finish = 1;
	if (x > length)
		x = length;
	if (y > width)
		y = width;
	return finish;

}
circleField::circleField(int rad, int endline) :Field(endline){
	radius = rad;
}
int circleField::check_place(int &x, int &y)
{
	int finish = 0;
	if (x > end_line)
		finish = 1;
	if (x > radius)
		x = radius;
	if (y > radius)
		y = radius;
	return finish;

}
