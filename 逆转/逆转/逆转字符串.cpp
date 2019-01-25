#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
void reverse_swap(char*left, char *right){
	assert(left != NULL);
	assert(right != NULL);
	while (left < right){//通过传指针的形式反转
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
	
}
char* reverse(char* p){
	int length = strlen(p);
	char* start = p;
	char* end = NULL;
	char* ret = p;
	reverse_swap(p, p + length - 1); //反转整个字符串
	while (*p){//指针为0，字符串结束
		start = p;//头指针
		while ((*p != ' ') && (*p != '\0')){ //空格停止，一个单词结束
			p++;
		}
		end = p - 1;//尾指针
		reverse_swap(start, end);//翻转单个单词
		if (*p == ' ')
			p++;
	}
	return ret;//返回指针
}
int main(){
	char arr[]= "student a am i";
	printf("翻转前：%s\n",arr);
	printf("翻转后：%s\n", reverse(arr));
	system("pause");
	return 0;
}