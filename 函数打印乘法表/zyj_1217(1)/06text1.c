//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
int fun(a){
	int i, j;
	for (i = 1; i <= a; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%2d\t", j, i, j*i); 

		}
		printf("\n");
	}
	return(a);

}
int main(){
	int a;
	printf("������һ����\n");
	scanf("%d", &a);
	printf("",fun(a));
	system("pause");
}