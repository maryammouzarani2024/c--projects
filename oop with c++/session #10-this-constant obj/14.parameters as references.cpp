#include <iostream>
using namespace std;
 void swap2(int &x, int &y){
	 int t=x;
	 x=y;
	 y=t;
 }
// function declaration
void swap(int* x, int* y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
 void power2(int&x){
	 x=x * x;
 }
int main () {
   // local variable declaration:
   int a = 100;
   int b = 200;
   int &ref=a;
   swap2(a,b);
   
	power2(a);
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl;
 
   /* calling a function to swap the values.*/
   swap(&a, &b);
 
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
 
   return 0;
}
 
// function definition to swap the values.
void swap(int& x, int& y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}


//src: https://www.tutorialspoint.com