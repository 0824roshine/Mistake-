#include<stdio.h>
#include<string.h>
int printf_sizeof_and_�ַ���() {
	char a[] = "abcdef";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 0));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[1]));
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n\n", sizeof(&a[0] + 1));
	return 0;
}
int printf_strlen_and_�ַ���() {
	char a[] = "abcdef";   //strlen�������õ�ַ������
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 0));
//  printf("%d\n", strlen(*a));    error
//	printf("%d\n", strlen(a[1]));  ������asc��
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(&a + 1));         //���
	printf("%d\n\n", strlen(&a[0] + 1));
	return 0;
}
void printf_sizeof_��p()
{
	char *a = "abcdef";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[0]));// a[0]ȫ����*(a+0)==*a = 'a'
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n\n", sizeof(&a[0] + 1));
}
void printf_strlen_and_��p() {
	char* a = "abcdef";
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 1));
	//  printf("%d\n", strlen(*a));    error
	//	printf("%d\n", strlen(a[0]));  ������asc��
	printf("%d\n", strlen(&a));//  ���
	printf("%d\n", strlen(&a + 1));         //���
	printf("%d\n\n", strlen(&a[0] + 1));  //a[0]�����Ͻ�����һ�ν����ã���ȥ��ַ���ǡ�a���ĵ�ַ��
	return 0;
}
int main()
{
	printf_sizeof_and_�ַ���();
	printf_strlen_and_�ַ���();
	printf_sizeof_��p();
	printf_strlen_and_��p();
	return 0;
}