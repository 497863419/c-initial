#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void Game(){
	//�����ͨ��һ����ѧ��ʽ������һ����ʼֵ�����Ƶ����������������
	//�õ����������ݺͳ�ʼֵ�����еĹ�ϵ
	//�����ʼֵ��ͬ��������о���ͬ�������ʼֵ������������ӡ�
	//1.����һ��1-100���ڵ����������Ϊ��Ҫȥ�µ�����
	//2.�û�����һ�����֣������бȽ�
	//3.���ݱȽϽ����������˻��ߵ���
	srand(time(0));//�����������
	int result = rand() % 100 + 1;
	while(1){
		int num = 0;
		printf("������һ������[1-100]:\n");
		scanf("%d", &num);
		if (num > result){
			printf("�¸��ˣ�\n");
		}
		else if (num < result){
			printf("�µ��ˣ�\n");
		}
		else if (num == result){
			printf("�¶��ˣ�\n");
			break;
		}
     }
}
int Menu(){
	printf("==========================\n");
	printf("       1.��ʼ��Ϸ\n");
	printf("       2.������Ϸ\n");
	printf("==========================\n");
	printf("�������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	//ʵ��һ����������Ϸ��ʵ�ֻ��������еĲ˵�
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();//��ʼ��Ϸ
		} 
		else if (choice == 2){
			//������Ϸ
			printf("��Ϸ����\n");
			break;
		}
		else{
			printf("�Ƿ����룡\n");
		}
	}
	

	system("pause");
	
}