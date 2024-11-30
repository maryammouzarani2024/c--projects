#include <iostream>
using namespace std;
void sqrval(const int *val) 
{
	int *p ;
	p=val;//compile error
	// cast away const-ness.
	p = const_cast<int *> (val);
	*p = *val * *val; // now, modify object through val
}
	int main()
	{
		int x = 10;
		cout << "x before call: " << x << endl; 
		sqrval(&x);
		cout << "x after call: " << x << endl;
		return 0;
	}
	
///////////////////////////////////
#include <iostream>
using namespace std;
 
int fun(int* ptr)
{
    return (*ptr + 10);
}
 
int main(void)
{
    const int val = 10;
    const int *ptr = &val;
    int *ptr1 = const_cast <int *>(ptr);
    cout << fun(ptr1);
    return 0;
}