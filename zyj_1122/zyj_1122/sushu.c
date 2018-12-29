
#include <stdio.h>
#include<windows.h>
int main()
{
	int a = 0;
	int i = 0;
	for (a = 100; a <= 200; a++)
	{
		for (i = 2; i <= a - 1; i++)
		{
			if (a%i == 0)
				break;
		}

		if (i == a)
		{
			printf("%d  ", i);

		}
	}

	system("pause");
	return 0;
}
