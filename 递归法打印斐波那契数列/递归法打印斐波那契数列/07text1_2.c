#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fab(int n){
	//递推关系：Fab(n)=Fab(n-1)+Fab(n-2)
	//出口：n=1||n=2
	if (n == 1 || n == 2){
		return 1;
	}
	return Fab(n - 1) + Fab(n - 2);
}
int main(){
	int n;
	printf("请输入n:");
	scanf("%d", &n);
	printf("第%d个斐波那契数是：%d", n, Fab(n));
	system("pause");
	return 0;
}