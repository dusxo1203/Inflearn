#include <stdio.h>

#pragma warning(disable:4996)

int main()
{
	char fruit_name[40];	//stores only one character 1����Ʈ���� 40�� Ȯ��
	printf("What is your favoriate fruit?\n");

	scanf("%s", fruit_name);	//be careful with &, %s�� string�� �����̰� fruit_name ��ü�� �迭�� �ּҰ� �ǹǷ� �տ� & ����

	printf("You like %s!\n", fruit_name);

	return 0;
}