#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 5, b = 7;
	a = a^b;
	b = b^a;
	a = a^b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;

}