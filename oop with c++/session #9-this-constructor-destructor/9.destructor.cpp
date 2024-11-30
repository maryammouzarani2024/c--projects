#include <iostream.h>
using namespace std;
 class MyClass
{
    public:
	  int x;
	  MyClass(int i); // constructor
	  ~MyClass(); // destructor
};
                 // a parameterized constructor.
MyClass::MyClass(int i)
{
	 x=i;
}
	// Implement MyClass destructor.
MyClass::~MyClass()
{
		cout << "Destructing object whose x value is " <<x <<" \n ";
}
void main()
            {
   MyClass t1 (5);
   MyClass t2(19);
   cout << t1.x << " "<< t2.x << "\n";
}