#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("������������");
	scanf("%d,%d",&a,&b);
	while (a != b)//���������������Ƚ���ѭ��
	{
		if (a > b)
			a = a - b;
		if (a < b)
			b = b - a;
	}
	printf("���Լ��Ϊ%d\n", a);//��������ȣ����Լ��Ϊ����
	system("pause");
	return 0;
}