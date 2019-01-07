#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
int  prime(num){
	//判断一个数是否为素数
	int i;
	for (i = 2; i <num; i++){
		if (num%i == 0){
			break;
		}
	}//循环结束条件1）遇到break；2）没有找到被i整除的数；
	return i;
}
int main(){
	int num, i;
	printf("请输入一个数：\n");
	scanf("%d",&num);
	i=prime(num);
	/*if (prime(num)){
		printf("%d是素数！\n", num);
		}
		else{
		printf("%d不是素数！", num);
		}*/
	if (i >=num){
		printf("%d是素数！\n", num);
	}
	else
		printf("%d不是素数！\n", num);
	system("pause");
	return 0;
}