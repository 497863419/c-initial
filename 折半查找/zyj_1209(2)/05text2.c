#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	//1.�������� ����Ϊ��������
	//2.�������ң��������м���
	//3.�Ƚ��м�������Ҫ������
	int to_find = 3;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int left = arr[0];
	int right =arr[9];
	int mid = 0;
	while (left <= right){   //left=0,right=9������ռ�������Ԫ��
		mid = (left + right) / 2;  //4,2
		if (to_find > arr[mid]){//�Ҳ����
			left = mid + 1;
		}
		else if (to_find < arr[mid]){//������
			right = mid - 1;//3
		}
		else{
			break;
		}
	}if (left <= right){//ѭ������������1.�ҵ� break�� 2.left>right
		printf("�ҵ��ˣ� %d\n",mid);
	}else{
		printf("û�ҵ�!\n");
	}
	
		system("pause");
}
