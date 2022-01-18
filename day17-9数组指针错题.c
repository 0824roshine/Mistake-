#include<stdio.h>
void arr的意义()
{
    int* p = NULL;
    int arr[10] = { 0 };
    //下列哪个是错误的？？？
        //A p = arr;
        //B int(*ptr)[10] = &arr;   arr是数组，&arr是数组地址，必须放在数组指针里
        //C p = &arr[10];               再&arr 种，arr代表整个数组。
        //D p = &arr;
}
void 字符串常量和字符串的地址()
{
    char str1[] = "he";
    char str2[] = "he";
    char* str3 = "hehehe";
    char* str4 = "hehehe";
    // str1 ==. str2 ?
    // str3 == str4 ?
}
void 指针数组作为参数()
{
    char* arr[5] = { "WHY","HOW" };  // ----- char* 表示元素类型，该类型的地址是char**;
 //已知test(arr),则test设计正确的是     ----- arr 表示首元素地址。
    void test(char* arr);
    void test(char** arr);
    void test(char arr[5]);
    void test(char* arr[5]);
}
void 数组名取地址的意义()
{
    int a[5] = { 5,4,3,2,1 };
    int* ptr = (int*)(&a + 1);//数组的地址加1是跳过整个数组
    printf("%d,%d", *(a + 1), *(ptr - 1));
}
void 二维数组_地址综合()
{
    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
    int* ptr1 = (int*)(&aa + 1);
    int* ptr2 = (int*)(*(aa + 1));
    printf("%d,%d", *(ptr1-1), *(ptr2 - 1));
}
int main()
{
    //基础不牢地动山摇！
    return 0;
}