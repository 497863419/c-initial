#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main()
{
	int a[10], i;
	int max = a[0];
	
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (i = 0; i < 10; i++)
	{
		
		if (a[i]>max)
		max = a[i];
	}
	printf("最大值是%d\n", max);
	system("pause");
	return 0;
}
