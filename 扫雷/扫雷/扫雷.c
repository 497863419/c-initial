#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#define  ROW 9
#define  COL 9
#define  Mine_count 10//雷数
//扫雷游戏

//1.用二维数组展开地图 两张地图：
//1）玩家看到的地图；那些位置已翻开，那些位置为、未翻开
       //char型二维数组 空格表示未翻开；数字表示已翻开，数字表示当前格子周围的地雷数。 
         // 初始化为‘ ’表示未翻开 
//2）地雷布局图；char型二维数组表示:'1'是地雷；‘0’不是地雷
    //初始化地图：先把这个二维数组初始化为‘0’，随机设定若干个数字为地雷‘1’；
//2。打印地图（玩家看到的地图），提示玩家输入坐标
//3。校验玩家的输入数据是否合法 a）如果踩到雷，游戏结束并提示扫雷失败；
                              //a.b）如果翻开的格子不是地雷，并且是最后一个非地雷，提示扫雷成功
                                     //如果
           // b) 如果没有踩到雷，并且这个格子不是最后一个非地雷格子。展开地图，更新该位置地雷数；
int Meau(){
	printf("****************\n");
	printf("   1,Play Game  \n");
	printf("   0.Quit       \n");
	printf("****************\n");
	printf("请输入您的选择：");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
 void Init(char showmap[ROW+2][COL+2],char minemap[ROW+2][COL+2]){
	 //将showmap初始化为‘ ’；
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL+2; col++){
			showmap[row][col] = ' ';
		}
	}
	//将minemap初始化为‘0’；
	for (int row = 0; row < ROW + 2; row++){
		for (int col = 0; col < COL + 2; col++){
			minemap[row][col] = '0';
		}
	}
	//给minemap布雷
	int mine_count = Mine_count;
	while (mine_count > 0){//保证有雷
		//随机排雷
		int row = rand() % ROW + 1;
		int col = rand() % COL + 1;
		if (minemap[row][col] == '1'){//当前随机坐标已经有地雷
			continue;
		}
		minemap[row][col] = '1';//
		--mine_count;
	}
}
 UpdateshowMap();
 void Displaymap(char map[ROW + 2][COL + 2]){
	//打印地图
	//打印坐标
	printf("  ");//打印左上角空格
	for (int i = 1; i <= ROW; ++i){
		printf(" %d",i);
	}
	printf("\n");//打印上边框，加边框后不用考虑数组越界，后续条件判定的代码可以省略
	for (int i = 1; i <= ROW; ++i){
		printf("---");
	}
	printf("\n");//按行打印地图内容
	for (int row = 1; row <= ROW; ++row){
		//打印行号
		printf(" %d|", row);
		//打印改行每一列
		for (int col = 1; col <= COL; ++col){
			printf(" %c", map[row][col]);
		}
		printf("\n");
	}
}

void updateShowmap(char showmap[ROW + 2][COL + 2], char minemap[ROW + 2][COL+2],int row,int col){
	//统计当前位置周围地雷数，把数字和更新到showmap上；
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
	char showmap[ROW + 2][COL + 2];//地图外侧加边框
	char minemap[ROW + 2][COL + 2];
	Init(showmap, minemap);
	int safe_blank_count = 0;//翻开数，不是地雷个数
	while (1){
		Displaymap(showmap);//打印地图
		int row = 0;
		int col = 0;
		printf("请输入坐标：");
		scanf("%d %d", &row, &col);
		if (row<1 || row>ROW || col<1 || col>COL){
			printf("坐标输入非法，请重新输入！\n");
			continue;
		}
		//验证是否踩雷
		if (minemap[row][col] == '1'){//踩雷
			printf("游戏结束，扫雷失败！\n");
			break;//
		}
		//验证扫雷成功
		++safe_blank_count;
		if (safe_blank_count == ROW*COL - Mine_count){//翻开数=总数-雷数 //成立扫雷成功
			printf("游戏结束！，扫雷成功！\n");
			break;
		}
		//更新地图状态
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
			printf("再见！\n");
			break;
		}
		if (choice == 1){
			Game();
		}
	}
	system("pause ");
	return 0;
}