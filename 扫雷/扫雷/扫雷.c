#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define  ROW 9
#define  COL 9
#define  Mine_count 10//����
//ɨ����Ϸ

//1.�ö�ά����չ����ͼ ���ŵ�ͼ��
//1����ҿ����ĵ�ͼ����Щλ���ѷ�������Щλ��Ϊ��δ����
       //char�Ͷ�ά���� �ո��ʾδ���������ֱ�ʾ�ѷ��������ֱ�ʾ��ǰ������Χ�ĵ������� 
         // ��ʼ��Ϊ�� ����ʾδ���� 
//2�����ײ���ͼ��char�Ͷ�ά�����ʾ:'1'�ǵ��ף���0�����ǵ���
    //��ʼ����ͼ���Ȱ������ά�����ʼ��Ϊ��0��������趨���ɸ�����Ϊ���ס�1����
//2����ӡ��ͼ����ҿ����ĵ�ͼ������ʾ�����������
//3��У����ҵ����������Ƿ�Ϸ� a������ȵ��ף���Ϸ��������ʾɨ��ʧ�ܣ�
                              //a.b����������ĸ��Ӳ��ǵ��ף����������һ���ǵ��ף���ʾɨ�׳ɹ�
                                     //���
           // b) ���û�вȵ��ף�����������Ӳ������һ���ǵ��׸��ӡ�չ����ͼ�����¸�λ�õ�������
int Meau(){
	printf("****************\n");
	printf("   1,Play Game  \n");
	printf("   0.Quit       \n");
	printf("****************\n");
	printf("����������ѡ��");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
 void Init(char showmap[ROW+2][COL+2],char minemap[ROW+2][COL+2]){
	 //��showmap��ʼ��Ϊ�� ����
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL+2; col++){
			showmap[row][col] = ' ';
		}
	}
	//��minemap��ʼ��Ϊ��0����
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL + 2; col++){
			minemap[row][col] = '0';
		}
	}
	//��minemap����
	int mine_count = Mine_count;
	while (mine_count > 0){//��֤����
		//�������
		int row = rand() % ROW + 1;
		int col = rand() % COL + 1;
		if (minemap[row][col] == '1'){//��ǰ��������Ѿ��е���
			continue;
		}
		minemap[row][col] = '1';//
		--mine_count;
	}
}
 UpdateshowMap();
 void Displaymap(char map[ROW + 2][COL + 2]){
	//��ӡ��ͼ
	//��ӡ����
	printf("  ");//��ӡ���Ͻǿո�
	for (int i = 1; i <= ROW; ++i){
		printf(" %d",i);
	}
	printf("\n");//��ӡ�ϱ߿򣬼ӱ߿���ÿ�������Խ�磬���������ж��Ĵ������ʡ��
	for (int i = 1; i <= ROW; ++i){
		printf("---");
	}
	printf("\n");//���д�ӡ��ͼ����
	for (int row = 1; row <= ROW; ++row){
		//��ӡ�к�
		printf(" %d|", row);
		//��ӡ����ÿһ��
		for (int col = 1; col <= COL; ++col){
			printf(" %c", map[row][col]);
		}
		printf("\n");
	}
}

void updateShowmap(char showmap[ROW + 2][COL + 2], char minemap[ROW + 2][COL+2],int row,int col){
	//ͳ�Ƶ�ǰλ����Χ�������������ֺ͸��µ�showmap�ϣ�
	int  count = 0;
	if (minemap[row - 1][col - 1] == '1'){
		count++;
	}
	if (minemap[row - 1][col] == '1'){
		count++;
	}
	if (minemap[row - 1][col + 1] == '1'){
		count++;
	}
	if (minemap[row ][col - 1] == '1'){
		count++;
	}
	if (minemap[row ][col + 1] == '1'){
		count++;
	}
	if (minemap[row + 1][col - 1] == '1'){
		count++;
	}
	if (minemap[row + 1][col] == '1'){
		count++;
	}
	if (minemap[row + 1][col]=='1'){
		count++;
	}
	if (minemap[row + 1][col + 1] == '1'){
		count++;
	}
	showmap[row][col] = '0' + count;
}                             
void Game(){
	char showmap[ROW + 2][COL + 2];//��ͼ���ӱ߿�
	char minemap[ROW + 2][COL + 2];
	Init(showmap, minemap);
	int safe_blank_count = 0;//�����������ǵ��׸���
	while (1){
		Displaymap(showmap);//��ӡ��ͼ
		int row = 0;
		int col = 0;
		printf("���������꣺");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL){
			printf("��������Ƿ������������룡\n");
			continue;
		}
		//��֤�Ƿ����
		if (minemap[row][col] == '1'){//����
			printf("��Ϸ������ɨ��ʧ�ܣ�\n");
			break;//
		}
		//��֤ɨ�׳ɹ�
		++safe_blank_count;
		if (safe_blank_count == ROW*COL - Mine_count){//������=����-���� //����ɨ�׳ɹ�
			printf("��Ϸ��������ɨ�׳ɹ���\n");
			break;
		}
		//���µ�ͼ״̬
		updateShowmap(showmap, minemap, row, col);
		system("cls");
	}
	 Displaymap(minemap);
	 
}
 int main(){
	srand((unsigned int)time(0));
	while (1){
		int choice = Meau();
		if (choice == 0){
			printf("�ټ���\n");
			break;
		}
		if (choice == 1){
			Game();
		}
	}
	system("pause ");
	return 0;
}