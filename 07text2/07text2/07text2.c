#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fun(int n ,int k){//递推关系：n*Fun(n,k-1)；
	                  //出口：k=0||k=1；
	if (k > 0){
		return n*Fun(n, k - 1); 
	}
	else
		return 1;
}
int main(){
	int n, k;
	printf("请输入n和k:");
	scanf("%d %d", &n, &k);
	printf("%d的%d次方是%d：",n,k,Fun(n,k));
	system("pause");
	return 0;
}