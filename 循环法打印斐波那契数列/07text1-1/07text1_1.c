#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fab(int n){
	if (n == 1 || n == 2){//第一和第二个斐波那契数为1
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur= 0;
	for (int i=3; i <= n; i++){
		cur = last1 + last2;
		last2 = last1;//更新最后两个数
		last1 = cur;
		}
	return cur;

}
int main(){
	//打印第n个斐波那契数
	int n;
	printf("请输入n的值：");
	scanf("%d", &n);
	printf("第%d个斐波那契数是%d:",n,Fab(n));
	system("pause");
	return 0;
}