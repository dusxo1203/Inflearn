#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define PI 3.141592f	//기호적 상수로 처리
#define AI_NAME "Jarvis"

#pragma warning (disable:4996)

int main()
{
	float radius=0, area, circum;

	printf("I'm %s.\n", AI_NAME);
	printf("Please, input radius\n");

	scanf("%f", &radius);	//똑같이 했는데 에러남... 이유 모름

	area = PI * radius * radius;	//area = pi*r*r 원의 넓이
	circum = 2.0 * PI * radius;	//circum = 2.0*pi*r

	printf("Area is %f\n", area);
	printf("Circumference is %f\n", circum);



	//TODO: : wrong usage, strings, const

	return 0;
}