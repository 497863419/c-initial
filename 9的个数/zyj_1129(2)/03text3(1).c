#include <stdio.h>
#include<windows.h>
int main()
{
	int i, t=0;
	for (i = 1; i <= 100;i++)
	{
		if (i / 10 == 9)//ʮλΪ9
		{
			t++;
		}
	    if (i % 10 == 9)//���ﲻҲ��else if ����λΪ9
		{
			t++;
		}
	}
	printf("9�ĸ���Ϊ��%d", t);
	system("pause");
	return 0;

}