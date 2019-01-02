#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)//循环条件
	{
		printf("输入两个数：");
		scanf( "%d,%d",&a,&b);//从键盘输入两个数
		c = (a > b) ? b : a;     //是a，b中较小的数赋给c
		while ((a%c != 0) || (b%c != 0))//当两个数都能除尽较小的数
		{
			c--;
		}
		printf("最大公约数为： %d \n", c);
		
	}				
	system("pause");
	return 0;
}
