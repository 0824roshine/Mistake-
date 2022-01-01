#include<stdio.h>////          
#include<stdlib.h>
#include<windows.h>
#include<string.h>
int main()
{
	char ch[18] = { 0 };
	int i = 0;
	for (i = 0;i < 3; i++)
	{

		if (strcmp("Nevermore",ch)==0)
		{
			printf("Welcome\n");
			break;
		}	
		else
			printf("access deny,%d chances remaining\n",2-i);
	}
	if (i == 3)
		printf("system locked\n");
	return 0; 
}