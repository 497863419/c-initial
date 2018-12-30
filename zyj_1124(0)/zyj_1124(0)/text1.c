#include<stdio.h>
#include<Windows.h>
int main()
{
	int a = 10, b = 20, c;
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	
	system("pause");


}