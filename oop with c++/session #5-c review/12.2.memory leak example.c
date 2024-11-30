#include <stdlib.h>


int main()
{
	int count = 0;
	char *pointer = NULL;

	for (count = 0; count < 10; count++) {
		pointer = (char *)malloc(sizeof(char) * 100);
	}

	free(pointer);

	return 0;
}