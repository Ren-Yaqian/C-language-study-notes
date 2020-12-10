#include<stdio.h>
#include<windows.h>
#define COL 3

int FindNum(int a[][COL], int x, int y, int f)
{
	int i = 0, j = x - 1;
	while (j >= 0 && i < y)
	{
		if (a[i][j] < f){
			i++;
		}
		else if (a[i][j]>f){
			j--;
		}
		else{
			return 1;
		}
	}		
	return 0;
}
int main()
{
	int a[][COL] = { { 1, 2, 3 }, { 3, 5, 7 }, { 2, 3, 4 } };
	if (FindNum(a, 3, 3, 2))
	{
		printf("找到了\n");
	}
	else
	printf("没找到\n");
	system("pause");
	return 0;
}