#include <stdio.h>

void say_hello(void);	// �Լ��� �����

int main()
{
	int i = 0;

	say_hello();	//�Լ��� ȣ���

	return 0;
}

void say_hello()	//�Լ��� ���Ǻ�
{
	printf("Hello,World!\n");
}