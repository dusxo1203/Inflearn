#include <stdio.h>

void say_hello(void);	// 함수의 선언부

int main()
{
	int i = 0;

	say_hello();	//함수의 호출부

	return 0;
}

void say_hello()	//함수의 정의부
{
	printf("Hello,World!\n");
}