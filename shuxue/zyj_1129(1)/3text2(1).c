#include<stdio.h>
#include<windows.h>
int main()
{
	int i;
	double sum = 0, t1, t2;
	for (i = 1; i <= 50; i++)
	{
		t1 = 1.0 / (2 * i - 1);
		t2 = 1.0 / (2 * i);
		sum += t1 - t2;
	}
	printf("%f", sum);
	system("pause");
	return 0;
}
