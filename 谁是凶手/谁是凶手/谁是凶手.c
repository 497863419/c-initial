#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。//约定 a=1.b=2.c=3.d=4 
//A说：不是我。killer!=1
//B说：是C。killer=3
//C说：是D。killer=4
//D说：C在胡说 killer!=4
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
void find_killer(){ 
	//真为1  假为0
	//a说了假话： killer=1
    //b说了假话：  killer!=3
	//c说了假话：killer!=4
	//d说了假话：killer=4
	//3个人说了真话，一个人说了假话 a+b+c+d 的结果恒为3
	int killer;
	for (killer = 1; killer <= 4;killer++){
		if ((killer != 1) + (killer == 3) + (killer == 4) + (killer != 4) == 3){
			//3真1假结果恒为3
			//printf("%c\n",killer+97);//硬编码，不推荐
			printf("凶手是%c\n", killer + 'a'-1); //转化为字符 数字+字符-1转化为相应字符

		}
	}
}
int main(){
	find_killer();
	printf("");
	system("pause");
	return 0;
}