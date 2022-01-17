#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//  void qsort(void* base, size_t num, size_t width, int(*cmp)(const* el, const void* e2)) {;}   
//    ��������ģ� ��Ԫ�ص�ַ��Ԫ�ظ�����Ԫ�ش�С��������ָ�� ���Ƚ�����Ԫ�صķ�����ʹ�����Լ�ʵ�֡���
//____________________________________________________________________����������Ԫ�صĵ�ַ��
//_________________˭��________���ٸ���________���ֽڳ��ȴ������͡�
struct Stu
{
	char NAME[8];
	int age;
};
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1, const void* e2)
{
	if (*(float*)e1 == *(float*)e2)
		return 0;
	else if (*(float*)e1 > *(float*)e2)
		return 1;
	else if (*(float*)e1 < *(float*)e2)
		return -1;
}
void test2() //���򸡵�
{
	float f[] = { 3.3,2.5,4.8,9.7,0.2 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f", f[j]);
	}
	printf("%d\n");
}
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_NAME(const void* e1, const void* e2)
{
	return strcmp(((struct Stu*)e1)->NAME, ((struct Stu*)e2)->NAME);
}
void test3()//�ṹ�尴��������
{
	struct Stu ss[3] = { {"tom",20},{"lily",14},{"walter",13} };
	int sz = sizeof(ss) / sizeof(ss[0]);
	qsort(ss, sz, sizeof(ss[0]), cmp_stu_by_age);
}
void test4()//�ṹ�尴��������
{
	struct Stu ss[3] = { {"tom",20},{"lily",14},{"walter",13} };
	int sz = sizeof(ss) / sizeof(ss[0]);
	qsort(ss, sz, sizeof(ss[0]), cmp_stu_by_NAME);
}
//_______________________________________________________________________________________________________________
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *(buf1 + i);
		*(buf1 + i) = *(buf2 + i);
		*(buf2 + i) = tmp;
	}
}
void My_bubble_Sort(void* base, int sz,int width,int (*Cmp)(const void*e1,const void*e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if(Cmp((char*)base+j*width,(char*)base+(j+1)*width)>0)
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
		}
	}
}
void test10()
{
	int arr[10] = { 1,3,5,7,9,2,4,6,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	My_bubble_Sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
}
void test11()//�ṹ�尴��������
{
	struct Stu ss[3] = { {"tom",20},{"lily",14},{"walter",13} };
	int sz = sizeof(ss) / sizeof(ss[0]);
	My_bubble_Sort(ss, sz, sizeof(ss[0]), cmp_stu_by_age);
}
//�ص������� ͨ������ָ����õĺ���
// void*����ָ�룬���ܽ��н����ò��������Խ����������͵�ַ����int haha�е����ӡ�
int haha(int x)
{
	int a = 0;  void* pa = &a;
	return 1;
}
int Add(int x, int y)
{
	return x + y;
}
int main()
{
	
	int (*padd)(int, int) = Add;//����ָ��
	int(*pArr[5])(int, int);   //����ָ�������
	int(*(*pparr)[5])(int, int) = &pArr;//ָ��ָ�������ָ��
//	test4();test11();
	test11();
	return 0;
}