#include <iostream>

using namespace std;

class Box {
	
public:
	// Constructor definition
	Box(double l = 2.0, double b = 2.0, double h = 2.0) {
		cout << "Constructor called." << endl;
		length = l;
		width = b;
		height = h;
	}

	double Volume() {
		return length * width * height;
	}

	Box* compareLength(Box &box) {
		if (this->length > box.length)
			return this;
		else
			return &box;
	}

private:
	double length;     // Length of a box
	double width;    // width of a box
	double height;     // Height of a box
};


int main(void) {
	Box Box1(3, 1, 1);    // Declare box1
	Box Box2(8, 6, 2);    // Declare box2
	Box* longerBox = Box1.compareLength(Box2);
	cout << "Volume of the longer box is " << longerBox->Volume();

	return 0;
}

/*
Output:
Constructor called.
Constructor called.
Box2 is equal to or larger than Box1

Src: https://www.tutorialspoint.com
*/