
#include <iostream>
using namespace std;

class cl {
	int h;
	int i;
public:
	cl(int j, int k) {
		h = j; i = k;
	} // constructor with 2 parameters 
	int get_i() {return i;} 
	int get_h() {return h;}
};
int main() {
	cl ob[3] = { cl(1, 2), // initialize 
					cl(3, 4), cl(5, 6)};

	int i;
	for (i = 0; i < 3; i++) {
		cout << ob[i].get_h(); 
		cout << ", ";
		cout << (ob+i)-> get_i() << "\n";
	} 

	cl& obRef = ob[1];
	cout << obRef.get_h();

		return 0;
}