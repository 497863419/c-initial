#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
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
int count_one_bit(unsigned val){
	int count = 0;
	while (val){
		count++;
		val = val&(val - 1);
	}
	return count;
}
int main(){
	unsigned n;
	scanf("%u", &n);
	printf("%d\n", count_one_bit);
	system("pause");
	return 0;
}