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


	char a = '\a';	//�̽���������������, �ƽ�Ű 7���� ���� '����' �︮�µ� �齽����a�� �Է��ϰų� 8������ 16������ �Է��� ���� �ִ�.
					//\�� �پ��ִ� ���� \�� �� �ڿ� ���ڰ� �������� �ϳ��� ����ó�� �ൿ�ϰ� �̰��� �̽���������������� �ϸ�, ������ü�� ǥ���Ѵٱ⺸�ٴ� � ������ ǥ����.
	printf("%c", a);
	printf("\07");	//8���� 7�ǹ�
	printf("\x7");	//16���� 7�ǹ�

	float salary;
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("AB\tCDEF\n");	//\t�� ���� ������
	printf("ABC\tDEF\n");

	printf("\\ \'HA+\' \"HELLO\" \?\n");

	return 0;
}