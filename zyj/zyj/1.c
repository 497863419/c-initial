#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>


int main()

{
	int i, j, k;

	int A[10];

	int B[10];

	int C[10];

	printf("请输入A数组的内容：\n");

	for (i = 0; i < 10; i++)

	{
		scanf("%d", &A[i]);
	}

	printf("请输入B数组的内容：\n");

	for (j = 0; j < 10; j++)

	{
		scanf("%d", &B[j]);
	}



	for (k = 0; k < 10; k++)        //   引入变量，进行交换

	{

		C[k] = A[k];

	}

	for (i = 0; i < 10; i++)

	{

		A[i] = B[i];

	}

	for (j = 0; j < 10; j++)

	{

		B[j] = C[j];

	}

	printf("互换后的A数组为:\n");

	for (i = 0; i < 10; i++)

	{
		printf("%d ", A[i]);
	}

	printf("\n");

	printf("互换后的B数组为:\n");

	for (j = 0; j < 10; j++)

	{
		printf("%d ", B[j]);
	}

	printf("\n");
	system("pause");
	return 0;

}



