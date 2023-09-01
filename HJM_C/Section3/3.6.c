#include <stdio.h>
#include <limits.h>	//UINT_MAX인 unsigned int 의 최댓값 사용 가능
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	//unsigned int i = 0;

	//printf("%u\n", sizeof(unsigned int));	//4바이트,32비트
	//printf("%u", sizeof(i));				//4바이트,32비트

	//unsigned int i = 0b11111111111111111111111111111111;	//0b이면 2진수, 비트 32개가 모두 1이므로 가장 큰 수
	//printf("%u\n", i);
	//printf("%d\n", i);	//%d라고 하면 다른 값이 나옴

	//unsigned int u_max = UINT_MAX;
	//unsigned int u_min = 0;	//부호가 없으면 제일 작은 값이 0이기 때문에 매크로가 없음
	//signed int i_max = INT_MAX;
	//signed int i_min = INT_MIN;
	//printf("max of uint = %u\n", u_max);
	//printf("max of int = %u\n", i_max);
	//printf("max of uint = %u\n", u_min);
	//printf("max of int = %u\n", i_min);
	//return 0;


	unsigned int u_max = UINT_MAX + 1;	//가장 작은 값이 됨
	// 1111+1 = 10000
	//unsigned int u_max = 0 - 1;	//가장 큰 값이 됨
	//0000 - 1 = 1111
	
	//i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);	//변수가 담고 있는 숫자를 2진수로 바꿔줌

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);	//2진수 형태로 출력

	return 0;
}