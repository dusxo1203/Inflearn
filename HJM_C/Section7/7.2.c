#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// getchar(), putchar()

int main()
{
	/*
		 1. Intoduce getchar(), putchar()
		 2. Use while loop to process character sequences
		 3. Filter a specific character
		 4. Convert numbers to asterisks
		 5. Lower characters to Upper characters
	*/

	char ch;

	while ((ch = getchar()) != '\n')	//소문자는 대문자로, 대문자는 소문자로 변환
	{
		if (ch >= 'a' && ch <= 'z')// 'A' = 65, 'a' = 97
			ch -= 'a' - 'A';
		else if (ch >= 'A' && ch <= 'Z')
			ch += 'a' - 'A';

		//for (int i = '0'; i <= '9'; ++i)
		/*if (ch >= '0' && ch <= '9')
			ch = '*';*/

		putchar(ch);
	}

	putchar(ch);

	return 0;
}