#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	//int i = 0, j = 0;	//������ �ݵ�� �ʱ�ȭ�ϱ�
	//int sum = 0;

	//printf("input two int numbers \n");
	//scanf("%d%d", &i, &j);	//&:ampersand
	//printf("your num are %d and %d\n", i, j);

	//sum = i + j;
	//printf("%d plus %d = %d\n", i, j, sum);

	//return 0;

	float won = 0.0f;
	float dollar = 0.0f;

	printf("Input Won\n");
	scanf("%f", &won);

	dollar = won * 0.00089f;	//�Ǽ���
	printf("Dollar = %f\n", dollar);

	return 0;
}