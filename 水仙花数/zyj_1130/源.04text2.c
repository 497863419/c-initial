#include<stdio.h>
#include<windows.h>
int main()
{
	int i, a, b, c;
	for (i = 100; i <= 999; i++)
	{
		a = (i / 100);
		b = (i % 100 / 10);
		c = (i % 100 % 10);
		
		if ((a*a*a + b*b*b + c*c*c) == i)
		{
			printf("%d\t", i);
		}
	}                                                       
	system("pause");
	return 0;
}
