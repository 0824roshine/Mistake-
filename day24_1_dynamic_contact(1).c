#include"day24_3_dynamic_contact.h"
//有的函数不需要放在头文件里
static int FindByName(struct Contact* arr, const char name[Max_name])
{
	int i = 0;
	for (i = 0; i < arr->count; i++)
	{
		if (0 == strcmp(arr->data[i].name, name))
			return i;
	}
	return  -1;
}
void check_capacity(struct Contact* arr)
{
	if (arr->count == arr->capacity)
	{
		int capacity_tmp = arr->capacity + 2;
		struct Member* ptr = realloc(arr->data, (capacity_tmp) * sizeof(struct Member));
		if (ptr != NULL)
		{
			arr->data = ptr;
			arr->capacity = capacity_tmp;
			printf("扩容成功,");
		}
		else
			printf("扩容失败");
	}
	else
		printf("空间充足,");
}
void InitContact(struct Contact* pp)
{
	pp->data = (struct Member*)malloc(DEFAULT_SZ *sizeof(struct Member));
	if (pp->data == NULL)
	{
		printf("初始化失败");
		return;
	}	
	pp->count = 0;
	pp->capacity = DEFAULT_SZ;
}
void(*p_f_arr[6])(struct Contact*) = { New,Delete,Edit,Sort,Show,Search };
void New(struct Contact* arr1)
{
	check_capacity(arr1);
	assert(arr1->data != NULL);
	int pos = arr1->count;
	printf("请输入名字\n");
	scanf("%s", arr1->data[pos].name);
	printf("请输入电话\n");
	scanf("%s", arr1->data[pos].telephone);
	printf("请输入性别\n");
	scanf("%s", arr1->data[pos].sex);
	printf("请输入年龄\n");
	scanf("%d", &(arr1->data[pos].age)); //一定要给&
	arr1->count++;
	printf("新建成功\n");
}
void Delete(struct Contact* arr)
{
	char Nam[Max_name];
	printf("你想删谁？\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("目标不存在\n");
	else
	{
		for (int j = pos; j < (arr->count - 1); j++)
			arr->data[j] = arr->data[j + 1];
	}
	arr->count--;
	printf("已删除\n");
}
void Edit(struct Contact* arr)
{
	char Nam[Max_name];
	printf("你想更改谁的信息？\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("目标不存在\n");
	else
	{
		printf("请输入名字\n");
		scanf("%s", arr->data[pos].name);
		printf("请输入电话\n");
		scanf("%s", arr->data[pos].telephone);
		printf("请输入性别\n");
		scanf("%s", arr->data[pos].sex);
		printf("请输入年龄\n");
		scanf("%d", &(arr->data[pos].age)); //一定要给&
		printf("修改成功\n");
	}
}
void Sort(struct Contact* arr)
{
	printf("4\n");
}
void Show(struct Contact* arr)
{
	int num = arr->count;
	if (num)
	{
		for (int i = 0; i < num; i++)
		{
			printf("%-20s\t%-12s\t%-6s\t%-3s\n", "名字", "电话", "性别", "年龄");
			printf("%-20s\t%-12s\t%-6s\t%-3d\n",
				arr->data[i].name,
				arr->data[i].telephone,
				arr->data[i].sex,
				arr->data[i].age);
		}
	}
	else
	{
		printf("通讯录为空\n");
	}
}
void Search(struct Contact* arr)
{
	char Nam[Max_name];
	printf("你想找谁？\n");
	scanf("%s", Nam);
	int pos = FindByName(arr, Nam);
	if (pos == -1)
		printf("目标不存在\n");
	else
		printf("%-20s\t%-12s\t%-6s\t%-3s\n", "名字", "电话", "性别", "年龄");
	printf("%-20s\t%-12s\t%-6s\t%-3d\n",
		arr->data[pos].name,
		arr->data[pos].telephone,
		arr->data[pos].sex,
		arr->data[pos].age);
}
