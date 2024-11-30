#include <iostream>
#include <conio.h>
#include <thread>
#include <mutex>
#include <atomic>
using namespace std;
char input = 0;
mutex m;

atomic<int> do_continue = 1;
void get_input()
{
	char ch;
	while (input != 'q')
	{
		ch = getche();
		m.lock();
		input = ch;
		m.unlock();
	}
	do_continue = 0;
}

int main()
{
	thread t(get_input);
	int delay = 1000;
	while (do_continue)
	{
		m.lock();
		if (input == '+')
			delay = (delay - 100 < 0) ? 0 : delay - 100;
		m.unlock();
		cout << "*";
		_sleep(delay);
	}
	t.join();
	return 0;
}