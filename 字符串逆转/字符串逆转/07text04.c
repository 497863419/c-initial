#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int mystrlen(char*str){//�����ַ������Ⱥ���
	int count = 0;
	while (*str++){
		count++;
	}return count;
}
void reverse_string(char*str){
	/*char* start;
	char* end;
	char* temp;*/
		if (*str){
		char* start = str;
		char* end = str + mystrlen(str) - 1;
		char temp = *start;
		*start = *end;//��β����
		*end = '\0';//β���ݴ�
		reverse_string(start + 1);//��ת�ַ���
	    *end = temp;//�ָ�β��
		}
	//
}
int main(){
	char str[1024];
	printf("������һ���ַ���\n");
	scanf("%s", str);
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}