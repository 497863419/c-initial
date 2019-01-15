#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
#include<time.h>
#define ROW 5
#define COL 5
char g_broad[ROW][COL];
//五子棋
//使用字符类型二维数组来表示棋盘
//初始化函数Init（）
void Init(){
	//把数组的每个元素都初始化成' '
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
	printf("玩家落子！\n");
	while (1){
		printf("请输入一组坐标（row col):");
		int row =  0;
		int col = 0;
		scanf("%d %d", &row, &col);
		//合法性校验
		if (row < 0 || row >= ROW || col<0 || col>= COL){
			//用户输入坐标违法
			printf("坐标输入违法，请重新输入！\n");
			continue;
		}
		if (g_broad[row][col] != ' '){
			printf("有子了，请重新输入！\n");
			continue;
		}
		g_broad[row][col] = 'x';
		    break;
	}
}
//判定棋盘是否满了
int IsFull(){//如果满了返回1 ，没满返回0
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++){
			if (g_broad[row][col] == ' '){
				return 0;
			}
		}
	}
	return 1;//遍历结束没找到空格，棋盘满了，和棋；
}
char CheckWinner(){
	//返回当前游戏胜负结果
	//返回'x',表示玩家获胜
	//返回'o',表示电脑获胜
	//返回'q',表示和棋
	//返回' ',表示游戏没有结束
	//检查行
	for (int row = 0; row < ROW; row++){
		if (g_broad[row][0] == g_broad[row][1]
			&& g_broad[row][0] == g_broad[row][2]
					&& g_broad[row][0] == g_broad[row][3]
					&& g_broad[row][0] == g_broad[row][4]
					&& g_broad[row][0]!=' '){
					return g_broad[row][0];
					}
			}
  //检查列
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
	//检查对角线
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
	printf("电脑落子!\n");
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
//打印棋盘函数print（）
//玩家落子函数playermove()
//电脑落子函数
//检查胜负函数cheakwinner()
int main(){
	srand((unsigned int ) time(0));
	Init();
	char winner = ' ';
	while (1){
		Print();//打印棋盘
		PlayerMove();//玩家落子
		 winner = CheckWinner();//检查胜负
		if (winner != ' '){
			break;
		}
		ComputerMove();
		winner = CheckWinner();//检查胜负
		if (winner != ' '){
			break;
		}
		system("cls");
	}
	Print();
	if (winner == 'x'){
		printf("你赢了！\n");
	}else if (winner == 'o'){
		printf("你输了！\n");
	}else{
		printf("打平了！\n");
	}
	
	system("pause");
	return 0;
}
	