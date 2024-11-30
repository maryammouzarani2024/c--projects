#include <iostream>
#include <thread>
#include <vector>
using namespace std;
int a[2][3] = { { 1, 2, 3 }, { 5, 6, 7 } };
int c[2][2] = { 0, };
int b[3][2] = { { 3, 2 }, { 2, 1 }, { 4, 3 } };
struct dims
{
	int i, j, k;
};
void compute(struct dims d)
{
	int i = d.i, j= d.j, k = d.k;
	for (int j = 0; j < d.j; j++)
	{
		c[i][k] += a[i][j] * b[j][k];
	}
}
int main()
{
	int i, k;
	vector<thread> mythreads;
	dims dimensions;
	for ( i = 0; i < 2; i++)
	{
		for ( k= 0; k< 2; k++)
		{
			c[i][k] = 0;
			dimensions.i = i;
			dimensions.j = 3;
			dimensions.k = k;
			mythreads.push_back(thread(compute, dimensions));
		}	

	}
	vector<thread>::iterator itr = mythreads.begin();
	while (itr != mythreads.end())
	{
		(*itr).join();
		itr++;
	}
	for (i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << c[i][j] << "\t";
		cout << endl;
	}
	system("pause");
}
