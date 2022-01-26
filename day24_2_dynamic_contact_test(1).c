#define _CRT_SECURE_NO_WARNINGS
#include"day24_3_dynamic_contact.h"
void menu()
{
	printf("****************************\n");
	printf("***********通讯录***********\n");
	printf("*****1.功能******2.退出*****\n");
	printf("****************************\n");
}
void function_list()
{
	printf("****************************\n");
	printf("**********功能列表**********\n");
	printf("*****1.新建******2.删除*****\n");
	printf("*****3.编辑******4.排序*****\n");
	printf("*****5.显示******6.搜索*****\n");
	printf("**********7.返回************\n");
}
void test(struct Contact* arr)
{
	int tmp = 0;
	while (1)
	{
		function_list();
		scanf("%d", &tmp);
		if (tmp > 7 || tmp < 1)
		{
			printf("输入错误\n");
		}
		else if (tmp == 7)
		{
			break;
		}
		else
			(*p_f_arr[--tmp])(arr);      //注意！这里不能加&，因为变量是指针，用数组名就好了
	}
}
int main()
{
	int mainfun = 0;
	struct Contact list1;
	InitContact(&list1);
	do
	{
		menu();
		scanf("%d", &mainfun);
		switch (mainfun)
		{
		case 1:
			test(&list1);
			break;
		case 2:
			return 0;
		default:
			printf("输入错误\n");
			break;
		}
	} while (1);
	return 0;
}