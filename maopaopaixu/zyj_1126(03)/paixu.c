#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
int main()
{
	int a[3];
	int i, j, t;
	for (i = 0; i < 3; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 3; i++)
	{
		for (j = i + 1; j < 3; j++)
		{
			if (a[i] < a[j])
			{
				t = a[j];
				a[j] = a[i];
				a[i] = t;
			}
		}
	}
	for (i = 0; i < 3; i++)
	{
		printf("%d", a[i]);

	}
	
		system("pause");
		return 0;
	}
