#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fab(int n){
	//���ƹ�ϵ��Fab(n)=Fab(n-1)+Fab(n-2)
	//���ڣ�n=1||n=2
	if (n == 1 || n == 2){
		return 1;
	}
	return Fab(n - 1) + Fab(n - 2);
}
int main(){
	int n;
	printf("������n:");
	scanf("%d", &n);
	printf("��%d��쳲��������ǣ�%d", n, Fab(n));
	system("pause");
	return 0;
}