#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define N 10
//3.����Ļ�ϴ�ӡ������ǡ�
//1  ��һ��1��Ԫ��
//1 1  �ڶ���2��Ԫ��
//1 2 1 ������3��Ԫ��  ��һ���͵�������1 
//1 3 3 1  ������4��Ԫ��  ��һ���͵��ĸ��� 1
 //  ����  ��N����N��������һ���͵�N����Ϊ1��
void print(){
	int a[N][N];
	int i, j;
	for (i=0; i < N; i++){
		a[i][0] = a[i][i] = 1;
		}
	for (i = 2; i < N; i++){
		for (j = 1; j < i; j++){//j<i  ��һ�����͵�i����֮�����
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//��ǰ����ȥ��һ����һ�к���һ�е�ǰ�� ����֮��
		}
	}
	for (i = 0; i < N; i++){//��ӡ����
		for (j = 0; j <= i; j++){//��ӡ����i��
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	print();
	system("pause");
	return 0;
}