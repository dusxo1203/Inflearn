//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//#define NUM_ROWS	5
//#define FIRST_CHAR	'A'
//#define LAST_CHAR   'K'
//
//int main()
//{
//	int r;// row loop
//	int c;// character loop
//
//	for (r = 0; r < NUM_ROWS; ++r)// outer row loop
//	{
//		for (c = FIRST_CHAR; c <= LAST_CHAR; ++c)// inner character loop
//			printf("%c ", c);
//		printf("\n");
//	}
//
//	return 0;
//}

//실습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NUM_ROWS	5
#define FIRST_CHAR	'A'
#define LAST_CHAR   'K'

int main()
{
	int r;// row loop
	int c;// character loop
	char i = FIRST_CHAR;

	for (r=NUM_ROWS; r > 0; r--)
	{
		for (c= LAST_CHAR - FIRST_CHAR; c >=0 ; c--)	//진짜 이상하게 코딩함;;
		{
			printf("%c ", i);
			i++;
		}
		i = FIRST_CHAR;
		printf("\n");
	}
	return 0;
}