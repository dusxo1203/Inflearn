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
	printf("%p\n", &a);	//a�� �ּ� ���

	{
		int a;
		a = int_max(4, 5);

		printf("%d\n", a);
		printf("%p\n", &a);	//���ȣ �ȿ� �Ȱ��� ������ �����ϸ� �ٸ� ������ �ǹǷ�, �ٸ� �ּҰ��� ����

		int b = 123;
	}

	printf("%d\n", a);
	printf("%p\n", &a);
	//a�� ��� ���� ������ ����
	return 0;
}
