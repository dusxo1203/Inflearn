#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//½Ç½À
int main()
{
	unsigned num;
	bool isPrime = true;// flag, try bool type

	scanf("%u", &num);

	/*
		TODO: Check if num is a prime number
		ex) num is 4, try num % 2, num % 3
		ex) num is 5, try num % 2, num % 3, num % 4
	*/
	for (unsigned div = 2; (div*div) <= num; ++div)
	{
		if (num % div == 0)
		{
			isPrime = 0;
			if (num == div * div)
			{
				printf("%u is divisible by %u.\n", num, div);
			}
			else
			{
				printf("%u is divisible by %u and %u.\n", num, div, num / div);
			}
		}
	}

	if (isPrime)
		printf("%u is a prime number.\n", num);
	else
		printf("%u is not a prime number.\n", num);

	return 0;
}

