#include "students.h"
#include <string.h>
#include <iostream>
using namespace std;



//main.cpp
void testFunction(student obj){
	cout << obj.getAvg();
}
void testFunction3(student* obj){
	cout << obj->getAvg();
}
student testFunction2(){
	student obj;
	obj.setName("mina akbari");
	return obj;
}

void generateStudent(){
	student st;
	st.setName("ahsdfg'jwhgdfjhsfgja");
	//do some processing
	
	return;
}


int main(){
	student ali("ali ahmadi", 123, 16), mina("mina mohamdi", 124345, 17);
	//student st[2000];// = { student("akbar", 34, 13), student("asghar", 123, 16) };

	{
		student gholi;
	}
	for (int i = 0; i < 100000; i++)
		generateStudent();
	int a[4] = { 1, 2, 3, 5 }; 
	//student ahmad("ass",)
	

	student *ptr = new student("ahmad", 12, 12);
	//student *ptr = new student();
}