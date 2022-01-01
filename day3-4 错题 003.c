#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)     //虽然判断条件为真，但i已经变成 5 了！
			printf("%d", i);
	}
	return 0;
}