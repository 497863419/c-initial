#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
void main(){
	void fun(str);//��������
	char str[100];
	printf("�������ַ���:\n");
	gets(str);
	fun(str);
	int i = 0;
	printf("�µ��ַ�����");
	while (str[i] != '\0'){
		if (str[i] >= 'A'&&str[i] <= 'z'){
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n");
	system("pause");
}
      void fun(char*str){
		  int i;
		  for (i = 0; str[i]!= '\0';i++){  
			  if (str[i] >='a'&&str[i] <= 'z'){
				  str[i]=str[i]-32;
			  }
			  else if (str[i]>='A'&&str[i] <= 'Z'){
				  str[i] = str[i] + 32;
			  }
			  else if (str[i]>='0'&&str[i] <= '9'){
				  ;
			  }
			  
		  }
  
	  }
		


