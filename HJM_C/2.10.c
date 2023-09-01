#include <stdio.h>

void say_hello();

int main()
{
	int x, y, z;

	x = 1;
	y = 2;
	z = x + y;

	printf("%d\n", z);

	say_hello();

	return 0;
}

void say_hello()
{
	int x = 1;
	x = 10;

	printf("Hello,World!\n");

	return;
}