#include<stdio.h>
#include<Windows.h>
#include<math.h>
int main()
{
	int n, k, i, m = 0;
	for (n = 101; n <= 200; n = n + 2)//n��100�仯��200����ÿ��n�����ж�
	{
		k = sqrt(n);
		for (i = 2; i <= k; i++)
			if (n%i == 0)//���n��i��������ֹ��ѭ������ʱi<k+1
				break;
		if (i >= k + 1)//���i>=k+1,��ʾnδ��������
		{
			printf("%d  ", n);//Ӧ��ȷ��n������
			m = m + 1;//m�������ƻ��У�һ�������10������
		}
		if (m % 10 == 0)//m�ۼƵ�10�ı���������
			printf("\n");
		}
	printf("\n");
	system("pause");
	return 0;
	
}