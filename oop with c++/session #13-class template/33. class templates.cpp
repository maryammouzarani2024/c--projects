#include <string>
#include <iostream>
using namespace std;

template <class T>
class simpleClass
{
private:
	T data;
	int x;
public:
	simpleClass(T n);
	void show();
};

//*************
template <class  T>
simpleClass<T>::simpleClass(T n)
{
	data = n;
	x=0;
}
//******************
template <class  T>
void simpleClass<T>::show()
{
	cout << data<< endl;
}


int main()
{
	simpleClass<int> x(25);
	simpleClass<float> y(25);
	//y=x; 
	
	
	cout << "int x = ";
	x.show();
	simpleClass<string> str("computer science");
	cout << "string str = ";
	str.show();
	simpleClass<double> d(1.25);
	cout << "double d = ";
	d.show();
	cin.get();
}

