#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//1.调整数组使奇数全部都位于偶数前面。
//
//题目：
//
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分

int rever(int* arr,int end){
	int i;
	for (i = 0; i <end; i++){
		if (arr[i] % 2 != 0){
			continue;
		}
		else{
			arr[i] ^= arr[end];
			arr[end] ^= arr[i];
			arr[i] ^= arr[end];

			/*int temp = arr[i];
			arr[end] = arr[i];
			arr[i] = temp;*/

			end--;
			i--;
		}
	}
}
int main(){
	int arr[] = { 1, 3, 2, 5, 6, 8, 9, 4 };
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	rever(arr,end);
	int i;
	for (i = 0; i <= end; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}