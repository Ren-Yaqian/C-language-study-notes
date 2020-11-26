#include <stdio.h>
#include <windows.h>
#include <math.h>
int main()
{
	int arr[] = {"1415161723"};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int temp;
	while (left < right){
		while ((left < right) && (arr[left] % 2 == 0)){
			left++;
		}
		while ((left < right)&&arr[right]%2==1){
			right--;
		}
		if (left < right){
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
		}
	}
	printf("%s", arr);
	
	system("pause");
	return 0;
}