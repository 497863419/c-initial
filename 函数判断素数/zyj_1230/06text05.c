#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
int  prime(num){
	//�ж�һ�����Ƿ�Ϊ����
	int i;
	for (i = 2; i <num; i++){
		if (num%i == 0){
			break;
		}
	}//ѭ����������1������break��2��û���ҵ���i����������
	return i;
}
int main(){
	int num, i;
	printf("������һ������\n");
	scanf("%d",&num);
	i=prime(num);
	/*if (prime(num)){
		printf("%d��������\n", num);
		}
		else{
		printf("%d����������", num);
		}*/
	if (i >=num){
		printf("%d��������\n", num);
	}
	else
		printf("%d����������\n", num);
	system("pause");
	return 0;
}