//使用函数实现两个数的交换
#include <stdio.h>
#include<windows.h>
#include<string.h>
void fun1(int* a, int* b){
	int temp = 0;
	temp = *a;
	*a =* b;
	*b = temp;
	
}
int main(){
	int a = 10, b = 20;
	fun1(&a,&b);
	printf("交换后的数为：%d,%d\n", a,b);
	system("pause");
	return 0;
}
