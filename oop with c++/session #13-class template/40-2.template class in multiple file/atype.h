#include <iostream>

using namespace std;

const int SIZE = 10;

template <class T> class atype {
	T a[SIZE];
public:
	atype() {
		int i;
		for (i = 0; i<SIZE; i++) a[i] = i;
	}
	const T&  operator[](int i) const;// range checking a[10]
	 T&  operator[](int i) ;// range checking a[10]

};

template  class atype<int>;
template  class atype<double>;

