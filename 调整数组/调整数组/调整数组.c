#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//1.��������ʹ����ȫ����λ��ż��ǰ�档
//
//��Ŀ��
//
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��

int rever(int* arr,int end){
	int i;
	for (i = 0; i <end; i++){
		if (arr[i] % 2 != 0){
			continue;
		}
		else{
			arr[i] ^= arr[end];
			arr[end] ^= arr[i];
			arr[i] ^= arr[end];

			/*int temp = arr[i];
			arr[end] = arr[i];
			arr[i] = temp;*/

			end--;
			i--;
		}
	}
}
int main(){
	int arr[] = { 1, 3, 2, 5, 6, 8, 9, 4 };
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	rever(arr,end);
	int i;
	for (i = 0; i <= end; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}