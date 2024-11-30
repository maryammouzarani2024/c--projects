#include <stdlib.h>
void newArray(int size)
{
	int *myArray;
	myArray = (int*)malloc(size * sizeof(int));
	if (myArray == NULL)
		return;
	for (int i = 0; i < size; i++)
		*(myArray + i) = 0;
	//free(myArray);
	return;
}

int main()
{
	newArray(200);
	newArray(300);
	newArray(400);

	return 0;

}