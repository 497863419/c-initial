#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int jiecheng1(n){//ѭ����
	int i , sum = 1;
	for (i = 1; i <=n; i++){
		sum *= i;
	}
	return sum;
}
int jiecheng2(n){//�ݹ鷨 ���ƹ�ϵ��n*Fun��n-1��
	if (n<2){    //���� n<2��
		return 1;
	}return n*jiecheng2(n - 1);
}
int main(){
	int n;
	printf("������һ������\n");
	scanf("%d", &n);
	printf("%d�Ľ׳�Ϊ%d\n", n, jiecheng1(n));
	printf("%d�Ľ׳�Ϊ%d\n", n, jiecheng2(n));
	system("pause");
	return 0;

}