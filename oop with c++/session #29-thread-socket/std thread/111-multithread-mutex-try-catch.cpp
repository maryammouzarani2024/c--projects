#include <iostream>
#include <thread>
#include <list>
#include <mutex>
using namespace std;

// a global variable
list<int>myList;
mutex m;
void addToList(int max, int interval)
{
	m.lock();
	try
	{
		for (int i = 0; i < max; i++) {
			if ((i % interval) == 0) myList.push_back(i);
		}
	}
	catch (...){}
	m.unlock();
}

void printList()
{

	m.lock();
	try{
		for (auto itr = myList.begin(), end_itr = myList.end(); itr != end_itr; ++itr) {
			cout << *itr << ",";
		}
	}
	catch (...){}
	m.unlock();
}

int main()
{
	int max = 100;

	thread t1(addToList, max, 1);
	thread t2(addToList, max, 10);
	thread t3(printList);


	t1.join();
	t2.join();
	t3.join();

	return 0;
}