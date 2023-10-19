//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//	//int seconds = 0, minutes = 0, hours = 0;
//
//	//printf("Input seconds : ");
//	//scanf("%d", &seconds);
//
//	//while (seconds >= 0)
//	//{
//	//	minutes = seconds / 60;
//	//	seconds %= 60;
//
//	//	hours = minutes / 60;
//	//	minutes %= 60;
//
//	//	// print result
//	//	printf("%d hours, %d minutes, %d seconds\n", hours, minutes, seconds);
//
//	//	printf("Input seconds : ");
//	//	scanf("%d", &seconds);
//	//}
//
//	//printf("Good bye\n");
//
//	int div, mod;
//
//	div = 11 / 5;
//	mod = 11 % 5;
//	printf("div = %d, mod = %d\n", div, mod);
//
//	div = 11 / -5;
//	mod = 11 % -5;
//	printf("div = %d, mod = %d\n", div, mod);
//
//	div = -11 / -5;
//	mod = -11 % -5;// first operand is negative
//	printf("div = %d, mod = %d\n", div, mod);
//
//	div = -11 / 5;
//	mod = -11 % 5;// first operand is negative
//	printf("div = %d, mod = %d\n", div, mod);
//
//	return 0;
//}
// 
// 
//직접 실습
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;

	while (seconds >= 0)
	{
		printf("시간으로 변경할 초(sec)를 입력하시오: \n");
		scanf("%d", &seconds);


		hours = seconds / 3600;
		minutes = seconds / 60 - hours * 60;
		seconds = seconds % 60;
		if (seconds < 0)	//또는 입력을 while문의 맨 아래에 받으면 됨.
		{
			printf("Good bye\n");

			break;
		}
		printf(" 시간은 %d시간 %d분 %d초 입니다.\n", hours, minutes, seconds);

	}

	//음수를 나누면 어떻게 되는가?
	int div, mod;
	div = 11 / 5;
	mod = 11 % 5;
	printf("div = %d, mod = %d\n", div, mod);

	div = 11 / -5;
	mod = 11 % -5;
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / -5;
	mod = -11 % -5;// first operand is negative
	printf("div = %d, mod = %d\n", div, mod);

	div = -11 / 5;
	mod = -11 % 5;// first operand is negative
	printf("div = %d, mod = %d\n", div, mod);


	return 0;
}