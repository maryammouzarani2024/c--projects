#include <iostream>
#include <conio.h>
#include <thread>
using namespace std;
char input = 0;
int do_continue = 1;
void get_input()
{
	while (input != 'q')
	{
		input = getche();
	}
  	do_continue = 0;
}

int main()
{
	thread t(get_input);
	int delay = 1000;
	while (do_continue)
	{
		if (input == '+')
			delay = (delay - 100 < 0) ? 0 : delay - 100;
		cout << "*";
		_sleep(delay);
	}
	t.join();
	return 0;
}