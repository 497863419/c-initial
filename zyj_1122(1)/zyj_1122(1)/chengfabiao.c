#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 1;
	for (i = 1; i <= 9; i++)
	{
		int j = 1;
		for (j = 1; j <= i; j++)
		{
						printf("%d*%d=%2d\t", i,j,i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}