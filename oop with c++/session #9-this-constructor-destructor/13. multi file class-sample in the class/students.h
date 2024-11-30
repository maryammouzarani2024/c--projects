
#pragma once
#ifndef abc
#define abc

#include <iostream>
#include <string.h>
class student{
	//data member, attribute
	char *name;
	int stId;
	float avg;
	//member functions
public:
	//constructor: no return data even void
	//Default cstr
	student(char *_name = NULL, int _id = 0, float _avg = 0);
	//Destructor
	~student();
	student comparewith(student obj);
	//student(char *_name , int _id , float _avg );

	//declaration setter and getter function 
	//setter:
	//void compare(student obj);
	void setName(char *n);
	void setAvg(float average);
	void setId(int id);
	//getter 
	char* getName();
	int getId();
	float getAvg();
};

#endif
