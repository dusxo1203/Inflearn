//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
///*
//	10
//	10 / 2 = 5, remainder = 0
//	5 / 2 = 2, remainder = 1
//	2 / 2 = 1, remainder = 0
//	1 / 2 = 0, remainder = 1
//*/
//
//void print_binary(unsigned long n);
//void print_binary_loop(unsigned long n);
//
//int main()
//{
//	unsigned long num = 10;
//
//	print_binary_loop(num);
//	print_binary(num);
//
//	printf("\n");
//
//	return 0;
//}
//
////Note: printing order is reversed!
//void print_binary_loop(unsigned long num)
//{
//	while (1)
//	{
//		int quotient = num / 2;
//		int remainder = num % 2;
//
//		printf("%d", remainder); // remainder is 0 or 1
//
//		num = quotient;
//
//		if (num == 0) break;
//	}
//
//	printf("\n");
//}
//
//void print_binary(unsigned long num)
//{
//	int remainder = num % 2;
//
//	if (num >= 2)
//		print_binary(num / 2);
//
//	printf("%d", remainder);
//
//	return;
//}


//�ǽ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	10
	10 / 2 = 5, remainder = 0
	5 / 2 = 2, remainder = 1
	2 / 2 = 1, remainder = 0
	1 / 2 = 0, remainder = 1
*/

void print_binary(unsigned long n);
void print_binary_loop(unsigned long n);

int main()
{
	int num = 10;
	printf("print_binary_loop Value is ");
	print_binary_loop(num);
	printf("print_binary(recursion) Value is ");
	print_binary(num);

	return 0;
}

//Note: printing order is reversed!
void print_binary_loop(unsigned long num)
{
	int quo,remain;

	for (quo=num; quo > 0; quo/=2)
	{
		remain = quo % 2;
		printf("%d ", remain);
	}
	printf("\nbut, printing order is reversed!");
	printf("\n");
}

void print_binary(unsigned long num)
{
	int remain = num % 2;

	if (num >= 2) {
		print_binary(num / 2);
	}
	printf("%d ", remain);
	return;
}