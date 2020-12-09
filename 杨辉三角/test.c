#include <stdio.h>
#include <windows.h>
#define N 14

int main()

{
	int n = 10;
	int i, j, k, a[N][N];
	for (i = 1; i <= n; i++){
		a[i][1] = a[i][i] = 1;
	}
	for (i = 3; i <= n; i++){
		for (j = 2; j <= i - 1; j++){
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}
	}
	for (i = 1; i <= n; i++){
		for (k = 1; k <= n - i; k++){
			//printf(" ");
		}
		for (j = 1; j <= i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	printf("\n");


	system("pause");
	return 0;
}