#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
#define MAX 1000

//初始化
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void ADDContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已经满了\n");
	}
	else
	{
		printf("请输入添加人的姓名:>");
		scanf("%s", ps->data[ps->size].name);

		printf("请输入添加入的年龄:>");
		scanf("%d", &(ps->data[ps->size].age));//这里特别要注意  要添加取地址符号，要是数组不需要添加地址符号

		printf("请输入添加人的性别:>");
		scanf("%s", ps->data[ps->size].sex);

		printf("请输入添加人的电话:>");
		scanf("%s", ps->data[ps->size].tele);

		printf("请输入添加人的地址:>");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}


void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%5s\t%4s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
		for (i = 0; i < ps->size; i++)
		{
			printf("%20s\t%5d\t%4s\t%12s\t%20s\n",
				ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}

//将通过名字查找到被查找人的位置---》封装成函数
int FindByname(const struct Contact* ps, char name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}

void DelContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入指定删除人的姓名:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("查找人不存在\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入查找人的名字:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("查找的人不存在通讯录中\n");
	}
	else
	{
		printf("%20s\t%5s\t%4s\t%12s\t%20s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%20s\t%5d\t%4s\t%12s\t%20s\n",
			ps->data[pos].name,
			ps->data[pos].age,
			ps->data[pos].sex,
			ps->data[pos].tele,
			ps->data[pos].addr);
	}
}

void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入需要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("要修改的人不存在\n");
	}
	else
	{
		printf("请输入添加人的姓名:>");
		scanf("%s", ps->data[pos].name);

		printf("请输入添加入的年龄:>");
		scanf("%d", &(ps->data[pos].age));//这里特别要注意  要添加取地址符号，要是数组不需要添加地址符号

		printf("请输入添加人的性别:>");
		scanf("%s", ps->data[pos].sex);

		printf("请输入添加人的电话:>");
		scanf("%s", ps->data[pos].tele);

		printf("请输入添加人的地址:>");
		scanf("%s", ps->data[pos].addr);

		printf("修改成功\n");
	}
}


int cmp_Contact_age(void* e1, void* e2, int j)
{
	return ((struct Contact*)e1)->data[j].age - ((struct Contact*)e2)->data[j + 1].age;
}

swap(char* buf1, char* buf2, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void SortContact_age(struct Contact* ps)
{
	int width = sizeof(ps->data[0]);
	for (int i = 0; i < ps->size; i++)
	{
		for (int j = 0; j < ps->size - 1 - i; j++)
		{
			if (cmp_Contact_age((char*)ps->data + j * width, (char*)ps->data + (j + 1) * width, j) > 0)
			{
				swap((char*)ps->data + j * width, (char*)ps->data + (j + 1) * width, width);
			}
		}
	}
}




//1.存放1000个好友信息 -- 名字 电话 性别 地址 年龄
//2.增加好友信息      1
//3.删除指定名字好友的信息   2
//   修改指定好友信息   3
//   查找指定好友信息  4
//   打印通讯录   5
//    排序     6

void menu()
{
	printf("***************************************\n");
	printf("************** 1.ADD   2.DEL  *********\n");
	printf("************** 3.SEARCH  4.MODIFY *****\n");
	printf("************** 5.SHOW   6.SORT ********\n");
	printf("***************** 0.EXIT **************\n");
	printf("***************************************\n");
}

int main()
{
	int input = 0;
	//创建一个存放1000个人的通讯录
	struct Contact con;
	//将通讯录初始化
	InitContact(&con);
	do
	{
		menu();
		printf("请输入操作:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			ADDContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact_age(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}



















































































