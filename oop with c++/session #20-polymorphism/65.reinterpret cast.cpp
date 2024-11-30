#include <iostream>
using namespace std;
int main()
{
	int * p = new int(10);
	//int z = (int)p;

	int z= reinterpret_cast<int>(p);
	z++;
	cout << z;
	// another example
	char ch = 10;
	//int *q = (int *)&ch;
	int *q = reinterpret_cast <int*>(&ch);
	*q++; //???
	cout << *q;

}
//another example
#include <iostream> 
using namespace std;
int main() {
	int i;
	char *p = "This is a string";
	i = reinterpret_cast<int> (p); // cast pointer to integer 
	cout << i;
	return 0;
}
//