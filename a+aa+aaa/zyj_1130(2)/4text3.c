#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	int  i = 1, a;
	long sum = 0, temp = 0;
	printf("«Î ‰»Îaµƒ÷µ£∫");
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		temp = temp * 10 + a;
		sum = sum + temp;
	}
	printf("sum=%ld", sum);
	system("pause");
	return 0;
}