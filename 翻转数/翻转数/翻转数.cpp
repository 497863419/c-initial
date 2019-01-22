#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832
unsigned reverse_bits(unsigned n){
	unsigned sum = 0;
	int i;
	for (i = 0; i < 32; i++){
		sum += ((n >> i) & 1 * pow(2, 31 - i));
	}
	return sum;
}
int main(){
	unsigned n;
	scanf("%u", &n);
	printf("%d\n", reverse_bits(n));
	system("pause");
	return 0;
}