#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
void Fun(num){
	if (num<10){//��Ϊ��λ����ֱ�Ӵ�ӡ
		printf("%d\n", num);
	}
	else{//�����Ǹ�λ����ʼ ��������
		Fun(num / 10);//ȡÿһλ
		printf("%d\n", num % 10);//��ӡÿһλ
	}
}
int main(){
	int num;
	printf("������һ����");
	scanf("%d", &num);
	Fun(num);
	system("pause");
	return 0;
}