#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592f	//��ȣ�� ����� ó��
#define AI_NAME "Jarvis"

#pragma warning (disable:4996)

int main()
{
	float radius=0, area, circum;

	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);	//�Ȱ��� �ߴµ� ������... ���� ��

	area = PI * radius * radius;	//area = pi*r*r ���� ����
	circum = 2.0 * PI * radius;	//circum = 2.0*pi*r

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);



	//TODO: : wrong usage, strings, const

	return 0;
}