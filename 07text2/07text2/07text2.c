#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fun(int n ,int k){//���ƹ�ϵ��n*Fun(n,k-1)��
	                  //���ڣ�k=0||k=1��
	if (k > 0){
		return n*Fun(n, k - 1); 
	}
	else
		return 1;
}
int main(){
	int n, k;
	printf("������n��k:");
	scanf("%d %d", &n, &k);
	printf("%d��%d�η���%d��",n,k,Fun(n,k));
	system("pause");
	return 0;
}