#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()//շת�����
{
	int a, b, t = 0;
	printf("��������������");
	scanf("%d,%d", &a, &b);
	while (b != 0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	printf("���Լ����:%d\n", a);

	system("pause");
	return 0;
	}
