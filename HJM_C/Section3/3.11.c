#include <stdio.h>
#include <float.h>

int main()
{

	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long double));

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456;	//float형 뒤에 f를 안붙이면 경고가 뜸. 8바이트 더블을 4바이트 플롯에 넣어야되니까 정밀도에서 손해를 볼수도 있다는 경고.
	double d2 = 123.456f;	//플롯을 더블에 넣을때는 경고가 안뜸.

	int i = 3;
	float f3 = 3.f;	//3.0f
	double d3 = 3.;	//3.0

	float f4 = 1.234e10f;	//1.234 * 10의 10제곱

	float f5 = 0x1.1p1;	//e 대신 p도 사용가능.
	double d5 = 1.0625e0;	//0.0625

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A \n", f5, f5);
	printf("%a %A \n", d5, d5);
}