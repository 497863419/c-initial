#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int jiecheng1(n){//循环法
	int i , sum = 1;
	for (i = 1; i <=n; i++){
		sum *= i;
	}
	return sum;
}
int jiecheng2(n){//递归法 递推关系：n*Fun（n-1）
	if (n<2){    //出口 n<2；
		return 1;
	}return n*jiecheng2(n - 1);
}
int main(){
	int n;
	printf("请输入一个数：\n");
	scanf("%d", &n);
	printf("%d的阶乘为%d\n", n, jiecheng1(n));
	printf("%d的阶乘为%d\n", n, jiecheng2(n));
	system("pause");
	return 0;

}