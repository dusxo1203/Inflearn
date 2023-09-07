#include <stdio.h>

#pragma warning(disable:4996)

int main()
{
	char fruit_name[40];	//stores only one character 1바이트공간 40개 확보
	printf("What is your favoriate fruit?\n");

	scanf("%s", fruit_name);	//be careful with &, %s는 string의 약자이고 fruit_name 자체가 배열인 주소가 되므로 앞에 & 없앰

	printf("You like %s!\n", fruit_name);

	return 0;
}