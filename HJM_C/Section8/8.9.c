#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>	// exit()
int main()
{
	int c;
	FILE* file = NULL;
	char file_name[] = "my_file.txt";//TODO: use scanf(...)

	file = fopen(file_name, "r");// read or write
	if (file == NULL)	//아무것도 없다면
	{
		printf("Failed to open file.\n");	
		exit(1);	//종료
	}

	while ((c = getc(file)) != EOF)
		putchar(c);
	fclose(file);

	return 0;
}