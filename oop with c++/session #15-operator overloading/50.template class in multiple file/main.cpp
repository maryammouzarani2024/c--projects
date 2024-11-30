#include "atype.h"
#include <iostream>
using namespace std;
int main()
{
	atype<int> intob; // integer array
	atype<double> doubleob; // double array
	int i;
	cout << "Integer array: ";
	for (i = 0; i<SIZE; i++) intob[i] = i;
	for (i = 0; i<SIZE; i++) cout << intob[i] << " ";
	cout << '\n';
	cout << "Double array: ";
	intob[8] = 100; // generates runtime error
	return 0;
}