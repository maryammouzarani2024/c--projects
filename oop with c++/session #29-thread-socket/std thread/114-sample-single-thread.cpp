//#define matrixsingle
#ifdef  matrixsingle
#include <iostream>
using namespace std;
int main()
{
	int a[2][3] = { { 1, 2, 3 }, { 5, 6, 7 } };
	int c[2][2] = { 0, };
	int b[3][2] = { { 3, 2 }, { 2, 1 }, { 4, 3 } };
	int i, j, k;
	for (i = 0; i < 2; i++)
	{
		for (k = 0; k < 2; k++)
		{
			c[i][k] = 0;
			for (j = 0; j < 3; j++)
				c[i][k] += a[i][j] * b[j][k];
		}
	}
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
			cout << c[i][j] << "\t";
		cout << endl;
	}
	system("pause");
}

#endif