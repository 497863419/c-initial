#include <stdio.h>
#include <windows.h>
int main()
{
	int a = 5, b = 7;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d,%d\n", a, b);
	system("pause");
	return 0;
}