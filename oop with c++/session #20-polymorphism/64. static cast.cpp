#include <iostream>
using namespace std;
int main()
{
	int * p=new int(10);
	int z = (int)p;

	//int z= static_cast<int>(p);
	z++;
	cout << z;
	// another example
	char ch = 10;
	int *q = (int *)&ch;
	//int *q = static_cast <int*>(&ch);
	*q++; //???
	cout << *q;

}