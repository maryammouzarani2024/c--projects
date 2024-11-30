
#include <iostream>
using namespace std;

class complex
{
	double real;
	double image;
public:
	complex(double i, double r)  { image = i; real = r; }
	friend  complex operator+(const complex &obj1, const complex &obj2);
	friend complex operator+(const complex &obj1, const double);
	bool operator==(const complex&);
	void print();
};
complex operator+(const complex &obj1, const complex &obj2)
{
	complex new_obj(0, 0);
	new_obj.real = obj1.real + obj2.real;
	new_obj.image = obj1.image + obj2.image;
	return new_obj;
}
complex operator+(const complex &obj1, const double d)
{
	double i_result = obj1.image;
	double r_result = obj1.real + d;
	complex result = complex(i_result, r_result);
	return result;

}
bool complex::operator==(const complex& obj)
{
	if (this->real == obj.real && this->image == obj.real)
		return true;
	else
		return false;
}
void complex::print()
{
	cout << real;
	if (image > 0)
		cout << "+" << image << "i" << endl;
	else if (image < 0)
		cout << image << "i" << endl;
}

int main()
{
	complex c1(12, -4); //c1=12-4i
	complex c2(2, -8);  //c2= 2-8i
	//complex c3 = c1.operator+(c2); syntax error
	complex c3 = operator+(c1, c2); //c3=c1+c2;
	c3.print();
	
	if (c1.operator==(c2))
		cout << "c1 is equal to c2" << endl;


	complex c4 = c1 + 4; //
	c4=operator+(c1,4);

	if (c4 == c3)
		cout << "c3 and c4 are equal" << endl;
	c4.print();



	return 0;


}
