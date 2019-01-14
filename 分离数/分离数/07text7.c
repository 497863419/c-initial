#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void Fun(num){
	if (num<10){//若为个位数，直接打印
		printf("%d\n", num);
	}
	else{//若不是个位数开始 调用自身
		Fun(num / 10);//取每一位
		printf("%d\n", num % 10);//打印每一位
	}
}
int main(){
	int num;
	printf("请输入一个数");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}