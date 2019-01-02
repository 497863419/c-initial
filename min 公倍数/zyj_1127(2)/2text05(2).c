#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()//辗转相除法
{
	int a, b, t = 0;
	printf("请输入两个数：");
	scanf("%d,%d", &a, &b);
	while (b != 0)
	{
		t = a%b;
		a = b;
		b = t;
	}
	printf("最大公约数是:%d\n", a);

	system("pause");
	return 0;
	}
