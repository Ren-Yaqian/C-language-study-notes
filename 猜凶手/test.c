#include<stdio.h>
#include<windows.h>
int main()
{
	int i;
	int a[4] = { 0 };
	for (i = 0; i < 4; i++){
		a[i] = 1;
		if ((a[0] != 1) + (a[2] == 1) + (a[3] == 1) + (a[3] != 1) == 3)
		{
			break;
		}
		a[i] = 0;

	}
	//printf("%d", i);
	putchar('A' + i);
	system("pause");
	return 0;
}