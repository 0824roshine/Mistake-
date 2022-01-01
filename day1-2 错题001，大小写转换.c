#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
/*int a;
	scanf("%d", &a);  // & 代表着 取变量地址。
	printf("%d", a);
	system("pasuse");*/
int main()
{
	char data = ':';
	int i = 0;
		data = getchar();
		if (data >= 'A' && data <= 'Z')
		{
			data = data + 32;
			printf("%c\n", data);
		}
		else if (data >= 97 && data <= 122)
		{
			data = data - 32;
			printf("%c\n",data);
		}
		else if (data >= 48 && data <= 57)
		{
			printf("%c\n", data);
		}
		else if (data == 32)
		{
			printf("space\n");
		}
		else 
		{
			i++;
			printf("error, 这是第 %d 次错误\n", i);
		}
	return 0;
}