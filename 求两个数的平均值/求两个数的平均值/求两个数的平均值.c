#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 5;
	int b = 5;
	int sum = a&b;
	int aver = (a&b) + ((a^b) >> 1);//>>��λ������������һλ=����
	printf("%d\n", aver);
	system("pause");
	return 0;
}