#include<stdio.h>
#include<windows.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000;year++)//��1000�������2000��
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//�ж�����
			printf("%d  ", year);
	
	}
	
	
	system("pause");
	return 0;
}