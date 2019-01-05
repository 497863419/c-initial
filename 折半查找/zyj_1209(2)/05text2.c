#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
int main(){
	//1.定义数组 必须为有序数组
	//2.定义左右，并计算中间数
	//3.比较中间数与所要查找数
	int to_find = 3;
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9};
	int left = arr[0];
	int right =arr[9];
	int mid = 0;
	while (left <= right){   //left=0,right=9；所查空间中仍有元素
		mid = (left + right) / 2;  //4,2
		if (to_find > arr[mid]){//右侧查找
			left = mid + 1;
		}
		else if (to_find < arr[mid]){//左侧查找
			right = mid - 1;//3
		}
		else{
			break;
		}
	}if (left <= right){//循环结束条件：1.找到 break； 2.left>right
		printf("找到了！ %d\n",mid);
	}else{
		printf("没找到!\n");
	}
	
		system("pause");
}
