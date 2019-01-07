#include<stdio.h>
#include <windows.h>
#include<string.h>
#include<stdlib.h>
#define N 10
void init(int arr[10],int size,int vaule){//初始化函数
		for (int i = 0; i < size; i++){
		arr[i] = vaule;
	}	
}
void empty(int arr[10], int size){//清空函数
	for (int i = 0; i < size; i++){
		arr[i] = 0;//将数组元素转化为0
	}
}
void reverse(int arr[10],int size){//交换函数
		int start = 0;
		int end = size - 1;
		for (int i = 0; start < end; i++){//交换
			arr[start] = arr[start] + arr[end];
			arr[end] = arr[start] - arr[end];
			arr[start] = arr[start] - arr[end];
			start++;//更新start和end
			end--;
		}
	}
void print(int arr[], int size){//打印函数
		int i = 0;
		for (i = 0; i < size; i++){
			printf("%d",arr[i]);
		}
		printf("\n");
	}


int main(){
	int arr[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("reverse:\n");
	reverse(arr, sizeof(arr) / sizeof(arr[0]));
	print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("init:\n");
	init(arr, sizeof(arr) / sizeof(arr[0]), 5);//调用初始化函数，将所有值初始化为5
	print(arr, sizeof(arr) / sizeof(arr[0]));
	printf("empty:\n");
	empty(arr, sizeof(arr) / sizeof(arr[0]));
	print(arr, sizeof(arr) / sizeof(arr[0]));
	system("pause");
		return 0;
}