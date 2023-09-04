#include <stdio.h>

#pragma warning(disable:4996)

int main()
{
	char c = 'A';
	char d = 65;
	char e = '*';

	printf("%c %hhd\n", c, c);
	printf("%c %hhd\n", d, d);

	printf("%c \n", c + 1);


	char a = '\a';	//이스케이프스퀀스로, 아스키 7번은 벨로 '딩동' 울리는데 백슬래시a로 입력하거나 8진수나 16진수로 입력할 수도 있다.
					//\가 붙어있는 것은 \와 그 뒤에 문자가 합쳐져서 하나의 문자처럼 행동하고 이것을 이스케이프스퀀스라고 하며, 문자자체를 표현한다기보다는 어떤 행위를 표현함.
	printf("%c", a);
	printf("\07");	//8진수 7의미
	printf("\x7");	//16진수 7의미

	float salary;
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("AB\tCDEF\n");	//\t은 줄을 맞춰줌
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"HELLO\" \?\n");

	return 0;
}