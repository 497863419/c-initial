#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int mystrlen(char*str){//¼ÆËã×Ö·û´®³¤¶Èº¯Êı
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
		*start = *end;//Ê×Î²½»»»
		*end = '\0';//Î²µãÔİ´æ
		reverse_string(start + 1);//Äæ×ª×Ö·û´®
	    *end = temp;//»Ö¸´Î²µã
		}
	//
}
int main(){
	char str[1024];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®\n");
	scanf("%s", str);
	reverse_string(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}