#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h> 
#include<malloc.h>
char* Getmemory1(void)
{
	char p[] = "hello  ";
	return p;
}
void test1返回栈空间地址的问题()
{
	char* str = NULL;
	str = Getmemory1();
	printf(str);
}
void Getmemory2(char** p, int num)
{
	*p = (char*)malloc(num);
}
void test2()
{
	char* str = NULL;
	Getmemory2(&str, 100);
	strcpy(str, "lollol  ");
	printf(str);
}
void test3()  //篡改动态内存区的内容
{
	char* str = (char*)malloc(36);
	strcpy(str, "hello  ");
	free(str);  //会变成野指针
	if (str != NULL)
	{
		strcpy(str, "world  ");
		printf(str);
	}
}
int main()
{
	test1返回栈空间地址的问题();
// 如果改成静态区 static 就行
// 如果用malloc，则为堆区，不free还可以用
	
	test2();
	
// 会有内存泄漏
	test3();
//非法访问内存
	return 0;
}