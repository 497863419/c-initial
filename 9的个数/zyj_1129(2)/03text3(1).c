#include <stdio.h>
#include<windows.h>
int main()
{
	int i, t=0;
	for (i = 1; i <= 100;i++)
	{
		if (i / 10 == 9)//十位为9
		{
			t++;
		}
	    if (i % 10 == 9)//这里不也用else if ；各位为9
		{
			t++;
		}
	}
	printf("9的个数为：%d", t);
	system("pause");
	return 0;

}