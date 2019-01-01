#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("输入两个数：");
	scanf("%d,%d",&a,&b);
	while (a != b)//输入的两个数不相等进入循环
	{
		if (a > b)
			a = a - b;
		if (a < b)
			b = b - a;
	}
	printf("最大公约数为%d\n", a);//两个数相等，最大公约数为本身
	system("pause");
	return 0;
}