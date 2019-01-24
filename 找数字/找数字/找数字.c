
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>
int main() {
	int arr[] = { 3,3,4,6,9,9,7,7,6};
	int temp = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		temp ^= arr[i];//两个数相同的话异或之后等于0
	}
	printf("%d", temp);
	system("pause");
	return 0;
}
