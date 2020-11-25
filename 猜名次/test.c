#include <stdio.h>
#include <windows.h>

int CheckData(int *p)
{
	int temp[7] = { 0 };
	int i;
	for (i = 0; i < 5; i++)
	{
		if (temp[p[i]]){
			return 0;
		}
		temp[p[i]] = 1;
	}
	return 1;
}


int main()
{
	int p[5];
	for (p[0] = 1; p[0] <= 5; p[0]++){
		for (p[1] = 1; p[1] <= 5; p[1]++){
			for (p[2] = 1; p[2] <= 5; p[2]++){
				for (p[3] = 1; p[3] <= 5; p[3]++){
					for (p[4] = 1; p[4] <= 5; p[4]++){
						if ((p[1] == 2) + (p[0] == 3) == 1 &&
							(p[1] == 2) + (p[4] == 4) == 1 &&
							(p[2] == 1) + (p[3] == 2) == 1 &&
							(p[2] == 5) + (p[3] == 3) == 1 &&
							(p[4] == 4) + (p[0] == 1) == 1 &&
							CheckData(p))
						{
							for (int i = 0; i < 5; i++)
							{
								printf("%d", p[i]);
							}
							putchar('\n');
						}
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}