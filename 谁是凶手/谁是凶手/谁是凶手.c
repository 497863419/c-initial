#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�� 
//���ɷ���һ��������Ϊ4�����ɷ��Ĺ��ʡ�//Լ�� a=1.b=2.c=3.d=4 
//A˵�������ҡ�killer!=1
//B˵����C��killer=3
//C˵����D��killer=4
//D˵��C�ں�˵ killer!=4
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
void find_killer(){ 
	//��Ϊ1  ��Ϊ0
	//a˵�˼ٻ��� killer=1
    //b˵�˼ٻ���  killer!=3
	//c˵�˼ٻ���killer!=4
	//d˵�˼ٻ���killer=4
	//3����˵���滰��һ����˵�˼ٻ� a+b+c+d �Ľ����Ϊ3
	int killer;
	for (killer = 1; killer <= 4;killer++){
		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3){
			//3��1�ٽ����Ϊ3
			//printf("%c\n",killer+97);//Ӳ���룬���Ƽ�
			printf("������%c\n", killer + 'a'-1); //ת��Ϊ�ַ� ����+�ַ�-1ת��Ϊ��Ӧ�ַ�

		}
	}
}
int main(){
	find_killer();
	printf("");
	system("pause");
	return 0;
}