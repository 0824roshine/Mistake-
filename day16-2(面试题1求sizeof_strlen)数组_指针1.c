#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void SizePrint()
{
	int a[] = { 1,2,3,4 };
	printf("%d\n", sizeof(a));  //a��ʾ�������飬������16
	printf("%d\n", sizeof(a+0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a+1));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(*&a));//16
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n", sizeof(&a[0]));
	printf("%d\n\n", sizeof(&a[0]+1));
}
void SizePrint2()
{
	char a[] = { '1','2','3','4'};
	printf("%d\n", sizeof(a)); 
	printf("%d\n", sizeof(a + 0));//�����8������
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n\n", sizeof(&a[0] + 1));

	printf("%d\n", strlen(a));    // ���
	printf("%d\n", strlen(a + 0));    //���
//	printf("%d\n", strlen(*a));    // ����
//	printf("%d\n", strlen(a[1]));  //  ����
	printf("%d\n", strlen(&a));   //  a=���
	printf("%d\n", strlen(&a + 1));  // a-4
	printf("%d\n", strlen(&a[0] + 1)); //  ��a - 1
}
int main()
{
	SizePrint(); 
	SizePrint2();
	return 0;
}