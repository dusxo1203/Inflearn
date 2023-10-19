//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////#define NUM_ROWS 12
//#define FIRST_CHAR	'A'
////#define LAST_CHAR   'K'
//
//int main()
//{
//	const char last_char = 'L';//TODO: use scanf()
//	const int num_rows = last_char - FIRST_CHAR + 1;
//
//	int r;// row loop
//	int c;// character loop
//
//	for (r = 0; r < num_rows; ++r)
//	{
//		for (c = FIRST_CHAR + r; c < FIRST_CHAR + num_rows; ++c)
//			printf("%c ", c);
//		printf("\n");
//	}
//
//	return 0;
//}

//½Ç½À
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS 12
#define FIRST_CHAR	'A'
#define LAST_CHAR   'L'

int main()
{
	int r;// row loop
	int c;// character loop

	for (r = 0; r < NUM_ROWS; ++r)
	{
		for (c = FIRST_CHAR+r; c <= LAST_CHAR; ++c)
		{
			printf("%c ", c);
		}
		printf("\n");
	}
	return 0;
}