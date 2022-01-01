#include<stdio.h>
int main1()
 {
	int ch = 0;
	while ((ch = getchar()) != EOF)   // Ctrl+Z  ==  EOF == End Of File
	{
		putchar(ch);
	}
	for (int i = 0; i < 10; i++); // 不要在循环内改变i；判断区间前闭后开；别随便省略。

	int i = 0; int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++);   //循环0次！！！ 中间的不是判断！
	k++;
	return 0;
}
//计算 1到n的阶乘的和
int main2()
{
	int n=0; int i=0;
	scanf_s("%d", &n);
	int plus = 0; int jx = 1;
	for (int j = 1; j <= n; j++)
	{
		for (i = 1, jx = 1; i <= j; i++)
		{
			jx = jx * i;
		}
		plus = plus + jx;
	}
	printf("%d", plus);
	return 0;
}
//                       优化！
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int plus = 0; int jx = 1;
	for (int j = 1; j <= n; j++)
	{
		jx = jx * j;
		plus = plus + jx;
	}printf("%d", plus);
	return 0;
}

