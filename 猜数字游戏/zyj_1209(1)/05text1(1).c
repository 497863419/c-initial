#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
void Game(){
	//随机数通过一个数学公式，根据一个初始值进行推导计算出的数字数列
	//得到的序列内容和初始值有密切的关系
	//如果初始值相同，随机序列就相同。这个初始值叫做“随机种子”
	//1.生成一个1-100以内的随机数，作为你要去猜的数字
	//2.用户输入一个数字，并进行比较
	//3.根据比较结果，输出高了或者低了
	srand(time(0));//设置随机种子
	int result = rand() % 100 + 1;
	while(1){
		int num = 0;
		printf("请输入一个数字[1-100]:\n");
		scanf("%d", &num);
		if (num > result){
			printf("猜高了！\n");
		}
		else if (num < result){
			printf("猜低了！\n");
		}
		else if (num == result){
			printf("猜对了！\n");
			break;
		}
     }
}
int Menu(){
	printf("==========================\n");
	printf("       1.开始游戏\n");
	printf("       2.结束游戏\n");
	printf("==========================\n");
	printf("请输入的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
int main(){
	//实现一个猜数字游戏，实现基于命令行的菜单
	while (1){
		int choice = Menu();
		if (choice == 1){
			Game();//开始游戏
		} 
		else if (choice == 2){
			//结束游戏
			printf("游戏结束\n");
			break;
		}
		else{
			printf("非法输入！\n");
		}
	}
	

	system("pause");
	
}