#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void reverse_swap(char*left, char *right){
	assert(left != NULL);
	assert(right != NULL);
	while (left < right){//ͨ����ָ�����ʽ��ת
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	
}
char* reverse(char* p){
	int length = strlen(p);
	char* start = p;
	char* end = NULL;
	char* ret = p;
	reverse_swap(p, p + length - 1); //��ת�����ַ���
	while (*p){//ָ��Ϊ0���ַ�������
		start = p;//ͷָ��
		while ((*p != ' ') && (*p != '\0')){ //�ո�ֹͣ��һ�����ʽ���
			p++;
		}
		end = p - 1;//βָ��
		reverse_swap(start, end);//��ת��������
		if (*p == ' ')
			p++;
	}
	return ret;//����ָ��
}
int main(){
	char arr[]= "student a am i";
	printf("��תǰ��%s\n",arr);
	printf("��ת��%s\n", reverse(arr));
	system("pause");
	return 0;
}