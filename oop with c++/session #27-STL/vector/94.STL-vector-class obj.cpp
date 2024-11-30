#include <iostream>
using namespace std;
#include <vector>
class Point
{
	int x;
	int y;

public:

	Point()
		: x(0), y(0)
	{
	}

	Point(int px, int py)
		: x(px), y(py)
	{
	}

	Point(const Point& pt)
		: x(pt.x), y(pt.y)
	{
		cout << "Inside the copy constructor!" << endl;
	}

	void print()
	{
		cout << "Point: " << x << ", " << y << endl;
	}
};
int main(){
	vector<Point> vecp;

	Point p1(1, 5);
	Point p2(3, 5);
	Point p3;

	vecp.push_back(p1);
	vecp.push_back(p2);
	vecp.push_back(p3);

	for (int index = 0; index < vecp.size(); index++)
		vecp[index].print();
}