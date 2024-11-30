#include <stdio.h>


// To debug in Visual Studio:
//Go to:Project Properties/Configuration Properties/Command Arguments
//Add the arguments you wish.
int main(int argc, char* argv[])
{
	char *fileName;
	FILE * pFile;
	char buffer[100];

	if (argc > 1)
	{
		fileName = argv[1];
		printf("The file name argument is %s \n", fileName);



		pFile = fopen(fileName, "r");
		if (pFile == NULL) printf("Error opening file");
		else
		{
			while (!feof(pFile))
			{
				if (fgets(buffer, 100, pFile) == NULL) break;
				printf("%s",buffer);
			}
			fclose(pFile);
		}
	}
	else
		printf("file name is required");

	return 0;
}

