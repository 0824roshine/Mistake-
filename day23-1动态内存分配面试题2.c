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
void test1����ջ�ռ��ַ������()
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
void test3()  //�۸Ķ�̬�ڴ���������
{
	char* str = (char*)malloc(36);
	strcpy(str, "hello  ");
	free(str);  //����Ұָ��
	if (str != NULL)
	{
		strcpy(str, "world  ");
		printf(str);
	}
}
int main()
{
	test1����ջ�ռ��ַ������();
// ����ĳɾ�̬�� static ����
// �����malloc����Ϊ��������free��������
	
	test2();
	
// �����ڴ�й©
	test3();
//�Ƿ������ڴ�
	return 0;
}