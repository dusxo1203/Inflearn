//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int num, sum = 0;
//
//	printf("Enter an integer (q to quit) : ");
//
//	while (scanf("%d", &num) == 1) { 			// equality operator
//
//		// do something
//		sum = sum + num;
//
//		printf("Enter next integer (q to quit) : ");
//	}
//
//	printf("Sum = %d\n", sum);
//
//	//TODO: C-style shortcut
//
//	return 0;
//}

//�ǽ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, sum = 0;
	int status;

	printf("Enter an integer (q to quit) : ");
	status = scanf("%d", &num);	//�Է¹��� ���� ������ ����

	while (status==1)
	{
		sum += num;
		printf("Enter an integer (q to quit) : ");	
		status = scanf("%d", &num);	//q�� quit�� int�� �ƴϹǷ� 0�� ���ϵ�


	}
	printf("sum = %d", sum);

	return 0;
}