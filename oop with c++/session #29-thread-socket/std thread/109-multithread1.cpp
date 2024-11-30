#include <iostream> 
#include <thread>
using namespace std;



void printInfo(char * str)
{
	for (int i = 0; i < 100; i++)
		cout << str << endl;
}


int main()
{
	thread t(printInfo, (char*)"Hello");
	for (int i = 0; i < 100; i++)
		cout << "BYEEEE\n";
		
	return 0;
}

