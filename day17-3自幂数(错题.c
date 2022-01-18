#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>

int main()
{
	int n = 0,i=0;
	long long a[10] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < 10; i++)
		a[i] = (long long)powf(i, n);

}