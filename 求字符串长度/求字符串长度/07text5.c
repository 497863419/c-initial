#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int mystrlen1(char* str){//forѭ����
	int count = 0;
	int i = 0;
	for (i = 0; str[i] != '\0';i++){
		count++;
		}
	return count;
}
int mystrlen2(char* str){//whileѭ����
	int count = 0;
	while (*str++){
		count++;
	}
	return count;
}
//�ݹ鷨
int mystrlen3(char* str){
	if (*str){
		return 1 + mystrlen3(str + 1);
	}return 0;
}
int main(){
	char str[1024];
	printf("������һ���ַ���\n");
	scanf("%s", &str);
	printf("�ַ�������Ϊ:%d\n", mystrlen1(str));
	printf("�ַ�������Ϊ:%d\n", mystrlen2(str));
	printf("�ַ�������Ϊ:%d\n", mystrlen3(str));
	system("pause");
	return 0;
}