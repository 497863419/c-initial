#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fab(int n){
	if (n == 1 || n == 2){//��һ�͵ڶ���쳲�������Ϊ1
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur= 0;
	for (int i=3; i <= n; i++){
		cur = last1 + last2;
		last2 = last1;//�������������
		last1 = cur;
		}
	return cur;

}
int main(){
	//��ӡ��n��쳲�������
	int n;
	printf("������n��ֵ��");
	scanf("%d", &n);
	printf("��%d��쳲���������%d:",n,Fab(n));
	system("pause");
	return 0;
}