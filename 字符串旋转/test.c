#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

int FindRound(const char *arr1, char * arr2)
{
	char temp[256] = { 0 };
	strcpy(temp, arr1);
	strcat(temp, arr1);
	return strstr(temp, arr2) != NULL;
}

void StrLeft(char * str,int k)
{
	int i, j, temp;
	int len = strlen(str);
	k %= len;
	for (i = 0; i < k; i++)
	{
		temp = str[0];
		for (j = 0; j < len - 1; j++)

		{
			str[j] = str[j + 1];
		}
		str[j] = temp;
	}
}

int main()
{
	int str = "qwerty";
	int k = 3;
	StrLeft(str, k);
	printf("%s\n", str);
	/*int arr1 = "asdfg";
	int arr2 = "fdsag";
	FindRound(arr1, arr2);*/

	system("pause");
	return 0;
}