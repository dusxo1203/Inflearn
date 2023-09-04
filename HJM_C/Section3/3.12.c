#include <stdio.h>
#include <float.h>

int main()
{
	//round-off errors (ex1)
	float a, b;
	a = 1.E20f + 1.0f;	//숫자가 너무 큰데에 누무 작은 숫자를 더하면 더하지 않음.
	b = a - 1.E20f;
	printf("%f\n", b);

	//round-off errors (ex2)
	float c = 0.0f;
	int i = 0;
	for (i = 0; i < 100; i++)
	{
		c = c + 0.01f;
	}
	printf("%f\n", c);	//0.01을 100번 더했음에도 0.99999가 출력됨. 그 이유는 0.01을 표현할 수 없기때문에 0.0099999~로 표현되고 오차가 누적되면서 오답이 나오는 것임.
	
	//overflow
	float maxf = 3.402823466e+38F;
	printf("%f\n", maxf);
	maxf = maxf * 100.0f;
	printf("%f\n", maxf);	//너무 커서 inf로 표현됨.

	double maxd = 3.402823466e+38F;
	printf("%f\n", maxd);
	maxd = maxd * 100.0f;
	printf("%f\n", maxd);

	//underflow
	return 0;
}