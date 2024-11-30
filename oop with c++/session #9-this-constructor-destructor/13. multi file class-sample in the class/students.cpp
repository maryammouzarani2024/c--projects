#include "students.h"

using namespace std;
// definition  =>.cpp
student::~student(){
	//cout << "destructor called\n";
	delete[]name;
}
student::student(char *name, int id, float avg){
	this->name = new char[80];
	if (name != NULL)
		strcpy(name, name);
	else
		strcpy(name, "");
	stId = _id;
	avg = _avg;
}
student student::comparewith(student obj){
	if (obj.getAvg() > this->getAvg())
		return obj;
	else
		return *this;
}
void student::setName(char *n){
	strcpy(this->name, n);
}

void student::setAvg(float average){
	avg = average;

}
void student::setId(int id){
	stId = id;
}
//getter 
char* student::getName(){
	return name;
}
int student::getId(){
	return stId;
}
float student::getAvg(){
	return avg;
}

