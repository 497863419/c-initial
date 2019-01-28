#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int search(int arr[3][3], int key, int row, int col){
	int x=0;
	int y=col-1;
	while ((x <= 2) && (y >= 0))
	{
		if (arr[x][y] == key)
		{
			printf("’“µΩ¡À£°\n %d %d", x, y);
			break;
		}
		else if (arr[x][y]<key)
			x++;
		else
			y--;
	}
	if ((x>2) || (y<0))
	{
		return 0;
	}	
}
int main(){
	int row=3;
	int col=3;
	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key;
	printf("«Î ‰»Îkey£∫\n");
	scanf("%d", &key);
	int ret=search(arr, key, 3, 3);
	if (ret == 1){
		printf("OK\n");
	}
	else{
		printf( "ON\n" );
	}
	system("pause");
	return 0;
}
