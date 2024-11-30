#include <iostream>
#include <conio.h>
#include <thread>
#include <mutex>
using namespace std;
mutex m;
long int mycounter = 0;
void doCount(int range)
{
	for (int i = 0;i<range;i++)
	{
		m.lock();
		mycounter++;
		m.unlock();
	}
	
}

int main()
{
	thread t1(doCount, 1000000);
	thread t2(doCount, 1000000);
	thread t3(doCount,1000000);
	
	t1.join();
	t2.join();
	t3.join();
	cout << "the counter is " << mycounter;
		return 0;
}