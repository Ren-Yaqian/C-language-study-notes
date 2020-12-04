#include<stdio.h>
#include<windows.h>
#include<assert.h>

int my_strlen(const *str)
{
	int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
char *my_strcpy(char *dest,const char *src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++){
		;
	}
	return ret;
}
int my_strcmp(const char *src,const char* dst)
{
	int ret = 0;
	assert(src != NULL);
	assert(dst != NULL);
	while (!(ret = *(unsigned char*)src - *(unsigned char *)dst) && *dst)
		++src, ++dst;
	if (ret < 0)
		ret = -1;
	else if (ret>0)
		ret = 1;
	return ret;
}
char *my_strcat(char *dest, const char*src)
{
	char *ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest)
	{
		dest++;
	}
	while ((*dest++ = *src++))
	{
		;
	}
	return ret;
}
int main()
{
	char str1[] = "abcdefg";
	char str2[] = "abc123";
	char str3[16];
	my_strcmp(str1, str2);
	printf("%s\n", str1);
	/*my_strlen(str1);
	printf("%s\n",str1);
	my_strcpy(str3, str2);
	printf("%s\n", str3);*/
	system("pause");
	return 0;
}