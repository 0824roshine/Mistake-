#include<stdio.h>
int main1()
 {
	int ch = 0;
	while ((ch = getchar()) != EOF)   // Ctrl+Z  ==  EOF == End Of File
	{
		putchar(ch);
	}
	for (int i = 0; i < 10; i++); // ��Ҫ��ѭ���ڸı�i���ж�����ǰ�պ󿪣������ʡ�ԡ�

	int i = 0; int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++);   //ѭ��0�Σ����� �м�Ĳ����жϣ�
	k++;
	return 0;
}
//���� 1��n�Ľ׳˵ĺ�
int main2()
{
	int n=0; int i=0;
	scanf_s("%d", &n);
	int plus = 0; int jx = 1;
	for (int j = 1; j <= n; j++)
	{
		for (i = 1, jx = 1; i <= j; i++)
		{
			jx = jx * i;
		}
		plus = plus + jx;
	}
	printf("%d", plus);
	return 0;
}
//                       �Ż���
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int plus = 0; int jx = 1;
	for (int j = 1; j <= n; j++)
	{
		jx = jx * j;
		plus = plus + jx;
	}printf("%d", plus);
	return 0;
}

