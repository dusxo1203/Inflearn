#include <stdio.h>
#include <float.h>

int main()
{

	printf("%u\n", sizeof(float));
	printf("%u\n", sizeof(double));
	printf("%u\n", sizeof(long double));

	float f = 123.456f;
	double d = 123.456;

	float f2 = 123.456;	//float�� �ڿ� f�� �Ⱥ��̸� ��� ��. 8����Ʈ ������ 4����Ʈ �÷Կ� �־�ߵǴϱ� ���е����� ���ظ� ������ �ִٴ� ���.
	double d2 = 123.456f;	//�÷��� ���� �������� ��� �ȶ�.

	int i = 3;
	float f3 = 3.f;	//3.0f
	double d3 = 3.;	//3.0

	float f4 = 1.234e10f;	//1.234 * 10�� 10����

	float f5 = 0x1.1p1;	//e ��� p�� ��밡��.
	double d5 = 1.0625e0;	//0.0625

	printf("%f %F %e %E\n", f, f, f, f);
	printf("%f %F %e %E\n", d, d, d, d);
	printf("%a %A \n", f5, f5);
	printf("%a %A \n", d5, d5);
}