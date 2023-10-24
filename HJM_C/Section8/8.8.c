#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char get_choice(void);
char get_first_char(void);
int  get_integer(void);
void count(void);

int main()
{
	int  user_choice;

	while ((user_choice = get_choice()) != 'q')
	{
		switch (user_choice)
		{
		case 'a':
			printf("Avengers assemble!\n");
			break;
		case 'b':
			putchar('\a');//Beep
			break;
		case 'c':
			count();
			break;
		default:
			printf("Error with %d.\n", user_choice);
			exit(1);
			break;
		}
	}
	return 0;
}

void count()
{
	int n, i;

	printf("Enter an integer:\n");
	n = get_integer();
	for (i = 1; i <= n; ++i)
		printf("%d\n", i);
	while (getchar() != '\n')
		continue;
}

int get_integer()
{
	int input;
	char c;

	while (scanf("%d", &input)!=1)	//input값이 정수가 아닐때 계속 while문 수행
	{
		while ((c = getchar()) != '\n')	//c에 입력된 문자를 저장한다.이후 '\n'인지 확인하여 아니라면 while문 수행하고, 맞으면 whlie문 빠져나옴
		{								//즉, '\n'일때까지 입력된 문자를 출력
			putchar(c);
		}
		printf("is not integer. \n Plz try again.");
	}
	return input;
}

char get_first_char(void)	//첫번째 글자만 입력받는 함수
{
	char ch;

	ch = getchar();
	while (getchar() != '\n')
		continue;

	return ch;
}
char get_choice(void)	//사용자 입력을 받는 부분
{
	int input;

	printf("Enter the letter of your choice:\n");
	printf("a. avengers\tb. beep\n");
	printf("c. Count\tq. quit\n");

	input = get_first_char();

	//while ((user_input < 'a' || user_input > 'c') && user_input != 'q')
	while (input != 'a' && input != 'b' && input != 'c' && input != 'q')
		//while(!(user_input == 'a' || user_input == 'b' || user_input == 'c' || user_input == 'q'))
	{
		printf("Please try again.\n");
		input = get_first_char();
	}
	return input;
}