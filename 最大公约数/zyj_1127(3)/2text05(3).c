#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	while (1)//ѭ������
	{
		printf("������������");
		scanf( "%d,%d",&a,&b);//�Ӽ�������������
		c = (a > b) ? b : a;     //��a��b�н�С��������c
		while ((a%c != 0) || (b%c != 0))//�����������ܳ�����С����
		{
			c--;
		}
		printf("���Լ��Ϊ�� %d \n", c);
		
	}				
	system("pause");
	return 0;
}
