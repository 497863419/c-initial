#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<string.h>
int fun(year){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("%d年是闰年！\n", year);
	}
	else printf("%d年不是闰年!\n", year);
	return year;

}
int main(){
	int year;
	printf("请输入一个年份\n");
	scanf("%d", &year);
		fun(year);
		system("pause");
	}