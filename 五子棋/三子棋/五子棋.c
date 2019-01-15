#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define ROW 5
#define COL 5
char g_broad[ROW][COL];
//������
//ʹ���ַ����Ͷ�ά��������ʾ����
//��ʼ������Init����
void Init(){
	//�������ÿ��Ԫ�ض���ʼ����' '
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			g_broad[row][col] = ' ';
		}
	}
}
void Print(){
	for (int row = 0; row < ROW; row++){
		printf("| %c | %c | %c | %c | %c |\n", g_broad[row][0], g_broad[row][1],
			g_broad[row][2], g_broad[row][3], g_broad[row][4]);
		if (row != ROW - 1){
			printf("|---|---|---|---|---|\n");
		}
	}
}
void PlayerMove(){
	printf("������ӣ�\n");
	while (1){
		printf("������һ�����꣨row col):");
		int row =  0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//�Ϸ���У��
		if (row < 0 || row >= ROW || col<0 || col>= COL){
			//�û���������Υ��
			printf("��������Υ�������������룡\n");
			continue;
		}
		if (g_broad[row][col] != ' '){
			printf("�����ˣ����������룡\n");
			continue;
		}
		g_broad[row][col] = 'x';
		    break;
	}
}
//�ж������Ƿ�����
int IsFull(){//������˷���1 ��û������0
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_broad[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;//��������û�ҵ��ո��������ˣ����壻
}
char CheckWinner(){
	//���ص�ǰ��Ϸʤ�����
	//����'x',��ʾ��һ�ʤ
	//����'o',��ʾ���Ի�ʤ
	//����'q',��ʾ����
	//����' ',��ʾ��Ϸû�н���
	//�����
	for (int row = 0; row < ROW; row++){
		if (g_broad[row][0] == g_broad[row][1]
			&& g_broad[row][0] == g_broad[row][2]
					&& g_broad[row][0] == g_broad[row][3]
					&& g_broad[row][0] == g_broad[row][4]
					&& g_broad[row][0]!=' '){
					return g_broad[row][0];
					}
			}
  //�����
	for (int col = 0; col < COL;col++){
		if (g_broad[0][col] == g_broad[1][col]
			&& g_broad[0][col] == g_broad[1][col]
			&& g_broad[0][col] == g_broad[2][col]
			&& g_broad[0][col] == g_broad[3][col]
			&& g_broad[0][col] == g_broad[4][col]
			&& g_broad[0][col] != ' '){
			return g_broad[0][col];
		   }
    }
	//���Խ���
	if (g_broad[0][0] == g_broad[1][1] &&
		g_broad[0][0] == g_broad[2][2] &&
		g_broad[0][0] == g_broad[3][3] &&
		g_broad[0][0] == g_broad[4][4] &&
		g_broad[0][0] != ' '){
		return g_broad[0][0];
	  }
	if (g_broad[0][4] == g_broad[1][3] &&
		g_broad[0][4] == g_broad[2][2] &&
		g_broad[0][4] == g_broad[3][1] &&
		g_broad[0][4] == g_broad[4][0] &&
		g_broad[0][4] != ' '){
		return g_broad[0][4];
	 }
	if (IsFull()){
		return 'q';
	}
	 return ' ';
}
void ComputerMove(){
	printf("��������!\n");
	while (1){
		int row = rand() % ROW;
		int col = rand() % COL;
		if (g_broad[row][col] != ' '){
			continue;
		}
		g_broad[row][col] = 'o';
		break;
	}
}
//��ӡ���̺���print����
//������Ӻ���playermove()
//�������Ӻ���
//���ʤ������cheakwinner()
int main(){
	srand((unsigned int ) time(0));
	Init();
	char winner = ' ';
	while (1){
		Print();//��ӡ����
		PlayerMove();//�������
		 winner = CheckWinner();//���ʤ��
		if (winner != ' '){
			break;
		}
		ComputerMove();
		winner = CheckWinner();//���ʤ��
		if (winner != ' '){
			break;
		}
		system("cls");
	}
	Print();
	if (winner == 'x'){
		printf("��Ӯ�ˣ�\n");
	}else if (winner == 'o'){
		printf("�����ˣ�\n");
	}else{
		printf("��ƽ�ˣ�\n");
	}
	
	system("pause");
	return 0;
}
	