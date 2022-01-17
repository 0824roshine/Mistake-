#include<stdio.h>
#include<string.h>
int printf_sizeof_and_字符串() {
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
int printf_strlen_and_字符串() {
	char a[] = "abcdef";   //strlen本质是用地址做变量
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 0));
//  printf("%d\n", strlen(*a));    error
//	printf("%d\n", strlen(a[1]));  传的是asc码
	printf("%d\n", strlen(&a));
	printf("%d\n", strlen(&a + 1));         //随机
	printf("%d\n\n", strlen(&a[0] + 1));
	return 0;
}
void printf_sizeof_星p()
{
	char *a = "abcdef";
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(a + 1));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(a[0]));// a[0]全等于*(a+0)==*a = 'a'
	printf("%d\n", sizeof(&a));
	printf("%d\n", sizeof(&a + 1));
	printf("%d\n\n", sizeof(&a[0] + 1));
}
void printf_strlen_and_星p() {
	char* a = "abcdef";
	printf("%d\n", strlen(a));
	printf("%d\n", strlen(a + 1));
	//  printf("%d\n", strlen(*a));    error
	//	printf("%d\n", strlen(a[0]));  传的是asc码
	printf("%d\n", strlen(&a));//  随机
	printf("%d\n", strlen(&a + 1));         //随机
	printf("%d\n\n", strlen(&a[0] + 1));  //a[0]本质上进行了一次解引用，再去地址就是‘a’的地址了
	return 0;
}
int main()
{
	printf_sizeof_and_字符串();
	printf_strlen_and_字符串();
	printf_sizeof_星p();
	printf_strlen_and_星p();
	return 0;
}