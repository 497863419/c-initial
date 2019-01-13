#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int mystrlen1(char* str){//for循环法
	int count = 0;
	int i = 0;
	for (i = 0; str[i] != '\0';i++){
		count++;
		}
	return count;
}
int mystrlen2(char* str){//while循环法
	int count = 0;
	while (*str++){
		count++;
	}
	return count;
}
//递归法
int mystrlen3(char* str){
	if (*str){
		return 1 + mystrlen3(str + 1);
	}return 0;
}
int main(){
	char str[1024];
	printf("请输入一个字符串\n");
	scanf("%s", &str);
	printf("字符串长度为:%d\n", mystrlen1(str));
	printf("字符串长度为:%d\n", mystrlen2(str));
	printf("字符串长度为:%d\n", mystrlen3(str));
	system("pause");
	return 0;
}