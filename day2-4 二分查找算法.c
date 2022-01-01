#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[] = { 3,5,8,13,21,34,55,89};
	int i = 0;
	int k; int right = (sizeof(arr)) / (sizeof(arr[0]));//求arr的常用方法！
	int posR ;
	int posL = 0; int pos = 0;
	for (k = 0; k < 100; k++)
	{
		for (pos = 0,posL=0, posR=right; k != arr[pos]; pos = (posL + posR) / 2)
		{
			if (arr[pos] < k)
				posL = pos + 1;//这里一开始没加一，然后死循环，因为把找过的数又找了一遍。
			else //if (arr[pos] > k)
				posR = pos;
			//else
			//{
			//	break;
			//}
			if (posL == posR)
			{
				printf("cant find %d\n",k);
				break;
			}
		}
		if(k== arr[pos])
		printf("%d's the position is %d\n", k, pos);
	}
	return 0;
}