#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define N 10
//3.在屏幕上打印杨辉三角。
//1  第一行1个元素
//1 1  第二行2个元素
//1 2 1 第三行3个元素  第一个和第三个是1 
//1 3 3 1  第四行4个元素  第一个和第四个是 1
 //  规律  第N行有N个数，第一个和第N个数为1；
void print(){
	int a[N][N];
	int i, j;
	for (i=0; i < N; i++){
		a[i][0] = a[i][i] = 1;
		}
	for (i = 2; i < N; i++){
		for (j = 1; j < i; j++){//j<i  第一个数和第i和数之间的数
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//当前数等去上一行上一列和上一行当前列 两数之和
		}
	}
	for (i = 0; i < N; i++){//打印出来
		for (j = 0; j <= i; j++){//打印到第i列
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	print();
	system("pause");
	return 0;
}