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

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int seconds = 0, minutes = 0, hours = 0;
	printf("시간으로 변경할 초(sec)를 입력하시오: \n");
	scanf("%d", &seconds);

	hours = seconds / 3600;
	minutes = seconds / 60 - hours * 60;
	seconds = seconds % 60;

	printf(" 시간은 %d시간 %d분 %d초 입니다.\n", hours, minutes, seconds);
	//printf("Good bye\n");

	//int div, mod;





	return 0;
}