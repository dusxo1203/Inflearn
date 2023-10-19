#include <stdio.h>

int main()
{
	//int a = 0;
	//a++;// a = a + 1 or a += 1;
	//printf("%d\n", a);

	//++a;// a = a + 1 or a += 1;
	//printf("%d\n", a);

	/*double b = 0;
	b++;
	printf("%f\n", b);

	++b;
	printf("%f\n", b);*/

	//int count = 0;
	//while (count < 10) // ++count or count++
	//{
	//	printf("%d ", count++); // ++count or count ++
	//	//++count;
	//}

	//int i = 1, j = 1;
	//int i_post, pre_j;

	//i_post = i++;
	//pre_j = ++j;

	//printf("%d %d\n", i, j);
	//printf("%d %d\n", i_post, pre_j);

	/*int i = 3;
	int l = 2 * --i;
	printf("%d %d\n", i, l);

	i = 1;
	l = 2 * i--;
	printf("%d %d\n", i, l);*/

	/* very high precedence */
	//int x, y, z;
	//x = 3, y = 4;
	//z = (x + y++) * 5;// (x+y)++ or x+(y++) ?
	//printf("%d %d %d", x, y, z);

	/* ++ and -- affect modifiable lvaues 증감연산자는 수정가늫한 L밸류(변수)에만 사용할수있음,리터럴이나 상수에 사용x*/
	//int x = 1, y = 1, z;
	//z = x * y++;// (x) * (y++), not (x*y)++
	////z = (x * y)++;//error 
	////z = 3++;//error 상수에 적용할수없음

	/* Bad practices */
	int n = 1;
	printf("%d %d", n, n * n++);	//이런식으로 n이 여러번 사용될 떄, n에 증감연산자를 사용하면 시스템마다 다른 값이 나올 수도 있음
	int x = n / 2 + 5 * (1 + n++);	//식을 쪼개서 사용하면 에러 방지할 수 있음
	int y = n++ + n++;

	return 0;
}