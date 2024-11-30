#include <iostream> 
 #include "Increment.h" 
 using namespace std;
 
 
 Increment::Increment( int c, int i)
	:count(c), // initializer for non-const member 
	increment(i) // required initializer for const member
	//initialization list
	{
		//something
		//count=c; 
		//increment=i; Syntax Error
	}
	
void Increment::print() const
{
	cout << "count =" << count << ", increment =" << increment << endl;
}
void Increment::addIncrement()	
{
 count += increment;
} 
} 