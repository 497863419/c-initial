#include<stdio.h>
#include<windows.h>
int main()
{
	int year;
	for (year = 1000; year <= 2000;year++)//从1000年访问至2000年
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//判断条件
			printf("%d  ", year);
	
	}
	
	
	system("pause");
	return 0;
}