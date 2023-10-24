#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int a;

int int_max(int i, int j);

int int_max(int i, int j)
{
	//a = 456;
	int m;
	m = i > j ? i : j;
	return m;
}

int main()
{
	int a;

	a = int_max(1, 2);

	printf("%d\n", a);
	printf("%p\n", &a);	//a의 주소 출력

	{
		int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);	//대괄호 안에 똑같은 변수를 선언하면 다른 변수가 되므로, 다른 주소값이 나옴

		int b = 123;
	}

	printf("%d\n", a);
	printf("%p\n", &a);
	//a는 모두 같은 공간을 공유
	return 0;
}
