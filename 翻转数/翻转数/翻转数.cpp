#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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