#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
int main(){
	//编写代码模拟三次密码输入场景。
	//最多能输入三次，密码正确，提示“登陆成功”，密码错误，
	//可以重新输入三次，最多输入三次。三次均错，提示退出系统。
	//1.定义“密码”
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("############################\n");
		printf("       请输入密码：\n");
		printf("############################\n");
		char password[1024] = {0};
		scanf("%s", password);
		if (strcmp(password,"123456")==0){//stramp(a,b)  字符串比较函数  基于ASCII码值的比较
			                              //若a>b 返回正数  ；若a<b  返回负数；若a=b  返回0
	          break; 
		}
		printf("############################\n");
		printf("   密码错误，请重新输入！\n");//包含在for循环体中
		printf("############################\n");
	   }//循环结束；
	if (i<3){//循环结束条件 1.密码正确；2.输入三次均错误。
		printf("############################\n");
		printf("登陆成功！\n");
		printf("############################\n");
	   }
	   else{
		printf("############################\n");
		printf("登陆失败！\n");
		printf("############################\n");
	   }

	   system("pause");
	}