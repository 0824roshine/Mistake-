#include<stdio.h>
void arr������()
{
    int* p = NULL;
    int arr[10] = { 0 };
    //�����ĸ��Ǵ���ģ�����
        //A p = arr;
        //B int(*ptr)[10] = &arr;   arr�����飬&arr�������ַ�������������ָ����
        //C p = &arr[10];               ��&arr �֣�arr�����������顣
        //D p = &arr;
}
void �ַ����������ַ����ĵ�ַ()
{
    char str1[] = "he";
    char str2[] = "he";
    char* str3 = "hehehe";
    char* str4 = "hehehe";
    // str1 ==. str2 ?
    // str3 == str4 ?
}
void ָ��������Ϊ����()
{
    char* arr[5] = { "WHY","HOW" };  // ----- char* ��ʾԪ�����ͣ������͵ĵ�ַ��char**;
 //��֪test(arr),��test�����ȷ����     ----- arr ��ʾ��Ԫ�ص�ַ��
    void test(char* arr);
    void test(char** arr);
    void test(char arr[5]);
    void test(char* arr[5]);
}
void ������ȡ��ַ������()
{
    int a[5] = { 5,4,3,2,1 };
    int* ptr = (int*)(&a + 1);//����ĵ�ַ��1��������������
    printf("%d,%d", *(a + 1), *(ptr - 1));
}
void ��ά����_��ַ�ۺ�()
{
    int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
    int* ptr1 = (int*)(&aa + 1);
    int* ptr2 = (int*)(*(aa + 1));
    printf("%d,%d", *(ptr1-1), *(ptr2 - 1));
}
int main()
{
    //�������εض�ɽҡ��
    return 0;
}