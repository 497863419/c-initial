#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int DigitSum(num){
	if (num < 10){//���ƹ�ϵ��num%10+DigitSum��num/10��
		          //���ڣ�numΪ��λ��
		return num;
	}return (num % 10 + DigitSum(num / 10));
}
int main(){
	int num;
	printf("������һ����\n");
	scanf("%d", &num);
	printf("%d", DigitSum(num));
	system("pause");
	return 0;
}