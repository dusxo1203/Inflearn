#include <stdio.h>
#include <limits.h>	//UINT_MAX�� unsigned int �� �ִ� ��� ����
#include <stdlib.h>
#pragma warning (disable:4996)

int main()
{
	//unsigned int i = 0;

	//printf("%u\n", sizeof(unsigned int));	//4����Ʈ,32��Ʈ
	//printf("%u", sizeof(i));				//4����Ʈ,32��Ʈ

	//unsigned int i = 0b11111111111111111111111111111111;	//0b�̸� 2����, ��Ʈ 32���� ��� 1�̹Ƿ� ���� ū ��
	//printf("%u\n", i);
	//printf("%d\n", i);	//%d��� �ϸ� �ٸ� ���� ����

	//unsigned int u_max = UINT_MAX;
	//unsigned int u_min = 0;	//��ȣ�� ������ ���� ���� ���� 0�̱� ������ ��ũ�ΰ� ����
	//signed int i_max = INT_MAX;
	//signed int i_min = INT_MIN;
	//printf("max of uint = %u\n", u_max);
	//printf("max of int = %u\n", i_max);
	//printf("max of uint = %u\n", u_min);
	//printf("max of int = %u\n", i_min);
	//return 0;


	unsigned int u_max = UINT_MAX + 1;	//���� ���� ���� ��
	// 1111+1 = 10000
	//unsigned int u_max = 0 - 1;	//���� ū ���� ��
	//0000 - 1 = 1111
	
	//i to binary representation
	char buffer[33];
	_itoa(u_max, buffer, 2);	//������ ��� �ִ� ���ڸ� 2������ �ٲ���

	// print decimal and binary
	printf("decimal: %u\n", u_max);
	printf("binary: %s\n", buffer);	//2���� ���·� ���

	return 0;
}