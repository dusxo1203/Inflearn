#include <stdio.h>
#include <limits.h>

int main()
{
	printf("%10i\n", 1234567);	//�� 10�ڸ�, ���� �ڸ��� ��ĭ���� ä��
	printf("%-10i\n", 1234567);	//- ���̸� ���ʿ� �ٿ���
	printf("%+i %+i\n", 123, -123);	//��ȣ �� ����
	printf("% i \n% i\n", 123, -123);	
	printf("%X\n", 17);
	printf("%#X\n", 17);
	printf("%05i\n", 123);
	printf("%*i\n", 7, 456);	//�տ� �ִ� ���ڰ� *�ڸ��� �� %7i�� ����

	printf("\nPrecision\n");
	printf("%.3d\n", 1024);
	printf("%.5d\n", 1024);
	printf("%.3f\n", 123456.1234567);
	printf("%.3f\n", 123456.1235);	//�ݿø���
	printf("%10.3f\n", 123.45678);
	printf("%010.3f\n", 123.45678);
	printf("%.5s\n", "ABCDEFGHIJKLMN");
	printf("%.s\n", "ABCDEFGHIJKLMN");// assumes .0

	printf("\nLength\n");
	printf("%hhd %hd %d\n", 257, 257, 257);	//�����÷ο�� 1 ��µ�
	printf("%d %lld %lld\n", INT_MAX + 1, INT_MAX + 1, 2147483648LL);// switch to x64

	return 0;
}