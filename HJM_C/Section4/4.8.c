#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);	//총 10자리, 남는 자리는 빈칸으로 채움
	printf("%-10i\n", 1234567);	//- 붙이면 왼쪽에 붙여줌
	printf("%+i %+i\n", 123, -123);	//부호 꼭 붙임
	printf("% i \n% i\n", 123, -123);	
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);	//앞에 있는 숫자가 *자리에 들어감 %7i와 동일

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567);
	printf("%.3f\n", 123456.1235);	//반올림됨
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");
	printf("%.s\n", "ABCDEFGHIJKLMN");// assumes .0

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);	//오버플로우로 1 출력됨
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);// switch to x64

	return 0;
}