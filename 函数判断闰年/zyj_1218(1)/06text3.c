#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <windows.h>
#include<string.h>
int fun(year){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		printf("%d�������꣡\n", year);
	}
	else printf("%d�겻������!\n", year);
	return year;

}
int main(){
	int year;
	printf("������һ�����\n");
	scanf("%d", &year);
		fun(year);
		system("pause");
	}