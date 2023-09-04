#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors (ex1)
	float a, b;
	a = 1.E20f + 1.0f;	//���ڰ� �ʹ� ū���� ���� ���� ���ڸ� ���ϸ� ������ ����.
	b = a - 1.E20f;
	printf("%f\n", b);

	//round-off errors (ex2)
	float c = 0.0f;
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		c = c + 0.01f;
	}
	printf("%f\n", c);	//0.01�� 100�� ���������� 0.99999�� ��µ�. �� ������ 0.01�� ǥ���� �� ���⶧���� 0.0099999~�� ǥ���ǰ� ������ �����Ǹ鼭 ������ ������ ����.
	
	//overflow
	float maxf = 3.402823466e+38F;
	printf("%f\n", maxf);
	maxf = maxf * 100.0f;
	printf("%f\n", maxf);	//�ʹ� Ŀ�� inf�� ǥ����.

	double maxd = 3.402823466e+38F;
	printf("%f\n", maxd);
	maxd = maxd * 100.0f;
	printf("%f\n", maxd);

	//underflow
	return 0;
}