#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
int main()
{
	int i, j, k;
	int a[5];
	int b[5];
	int c[5];
	printf("������a���������:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("������b���������:\n");
	for (j = 0; j < 5; j++)
	{
		scanf("%d", &b[j]);
	}

	for (i = 0; i < 5;i++)
	{ 
		c[i] = a[i];
	}
	for (j = 0; j < 5; j++)
	{
		a[j] = b[j];
	}
	for (k = 0; k < 5; k++)
	{
		a[k] = c[k];
	}

	printf("�����������AΪ:\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	printf("�����������BΪ:\n");
	for (j = 0; j < 5; j++)
	{
		printf("%d", b[j]);
	}
	printf("\n");
	system("pause");
	return 0;
	
	

}