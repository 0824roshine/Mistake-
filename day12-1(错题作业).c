#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void swap(int* arr, int* brr)
{
    int tmp = 0, i = 0, j = 0;
    for (i = 0; i < 10; i++)
    {
        tmp = *(brr + i);
        *(brr + i) = *(arr + i);
        *(arr + i) = tmp;
    }
}
void reverse(int size, int* arr)
{
    int left = 0;
    int tmp = 0;
    while (left < size)
    {
        tmp = *(arr+left);
        *(arr + left) = *(arr + size);
        *(arr + size) = tmp;
        left++;
        size--;
    }
}
//全局变量不初始化 默认是0， 指针类型决定了解引用操作的权限大小。
int p;
int main ()
{
    int arr[10] = { 2,3,5,8,13,21,34,55,89,144 };
    int brr[10] = { 100,200,300,400,500,600,700,800,900,1000 };
    int a = sizeof(arr) / sizeof(arr[0])-1;
    int c = 0, b = 5, d = 0;
    swap(arr, brr);
    reverse(a, arr);
    printf("%d",arr[0]);
       p--;
        if(p>sizeof(p))    //sizeof算出来的是无符号数，先将p转化为无符号数才能比较
        {
            printf("大于");
        }
        else
            printf("小于");
// 逗号优先级比等号低
        c = b++, ++b, ++d,d++;//这里先执行  c=b++,然后执行后面 的。
return 0;
}