#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int DigitSum(num){
	if (num < 10){//递推关系：num%10+DigitSum（num/10）
		          //出口：num为个位数
		return num;
	}return (num % 10 + DigitSum(num / 10));
}
int main(){
	int num;
	printf("请输入一个数\n");
	scanf("%d", &num);
	printf("%d", DigitSum(num));
	system("pause");
	return 0;
}