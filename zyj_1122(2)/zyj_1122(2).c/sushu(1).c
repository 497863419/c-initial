#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int n, k, i, m = 0;
	for (n = 101; n <= 200; n = n + 2)//n从100变化到200，对每个n进行判定
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n%i == 0)//如果n被i整除，终止内循环，此时i<k+1
				break;
		if (i >= k + 1)//如果i>=k+1,表示n未曾被整除
		{
			printf("%d  ", n);//应该确定n是素数
			m = m + 1;//m用来控制换行，一行内输出10个素数
		}
		if (m % 10 == 0)//m累计到10的倍数，换行
			printf("\n");
		}
	printf("\n");
	system("pause");
	return 0;
	
}