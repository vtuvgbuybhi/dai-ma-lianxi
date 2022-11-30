#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
};

struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX];//存放一个信息
	int size;//记录当前已经有的元素个数
};




void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//设置通讯录最初只有0个元素
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");
	}
	else
	{
		printf("请输入名字>:");
		//name是一个数组的名字，数组名表示首元素地址故这里不需要加取地址符号
		scanf("%s", ps->data[ps->size].name);

		printf("请输入年龄>:");
		scanf("%d", &(ps->data[ps->size].age));

		printf("请输入性别>:");
		scanf("%s", ps->data[ps->size].sex);

		printf("请输入电话>:");
		scanf("%s", ps->data[ps->size].tele);

		printf("请输入地址>:");
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
		if (ps->size == 0)
		{
			printf("通讯录为空格\n");
		}
		else
		{
			int i = 0;
			//标题
			printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "地址");
			//数据
			for (i; i < ps->size; i++)
			{
				printf("%20s\t%4d\t%5s\t%12s\t%20s\n",
					ps->data[i].name,
					ps->data[i].age,
					ps->data[i].sex,
					ps->data[i].tele,
					ps->data[i].addr);
			}
		}
	}
}



//static的三种作用
//1.static修饰局部变量，延长了局部变量的生命周期
//2.static修饰全局变量，让全局变量的作用域发生变化，不过生命周期没有变化，只能在自己所在的源文件使用
//3.static修饰函数，让函数只能在test.c里面用

static int FindByNAME(const struct Contact* ps, char name[MAX_NAME])
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
	printf("输入要删除人的姓名:>");
	scanf("%s", name);
	//查找删除人在什么位置
	//找到了返回1     没找到返回-1
	int pos = FindByNAME(ps, name);//将姓名的查找封装成函数

	//int i = 0;
	//for (i = 0; i <ps->size ; i++)
	//{
	//	if (0 == strcmp(ps->data[i].name, name))
	//	{
	//		break;
	//	}
	//}

	if (pos == -1)
	{
		printf("要删除的人不存在\n");
	}
	//删除
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[pos] = ps->data[pos + 1];//用后面的元素覆盖要删除的元素
		}
		ps->size--;//删除了，将数组的元素减少一个
		printf("删除成功\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("输入查找人的姓名:>");
	scanf("%s", name);
	int pos = FindByNAME(ps, name);
	if (pos == -1)
	{
		printf("要查找的人不存在\n");
	}
	//打印查找人信息
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s", "名字", "年龄", "性别", "电话", "地址");
		printf("%20s\t%4d\t%5s\t%12s\t%20s",
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
	printf("请输入要修改人的名字:>");
	scanf("%s", name);
	int pos = FindByNAME(ps, name);
	if (pos == -1)
	{
		printf("要修改人的信息不存在\n");
	}
	else
	{
		printf("请输入名字>:");
		//name是一个数组的名字，数组名表示首元素地址故这里不需要加取地址符号
		scanf("%s", ps->data[pos].name);

		printf("请输入年龄>:");
		scanf("%d", &(ps->data[pos].age));

		printf("请输入性别>:");
		scanf("%s", ps->data[pos].sex);

		printf("请输入电话>:");
		scanf("%s", ps->data[pos].tele);

		printf("请输入地址>:");
		scanf("%s", ps->data[pos].addr);

		printf("修改完成\n");

	}

}





//1.存放1000个好友信息 -- 名字 电话 性别 地址 年龄
//2.增加好友信息      1
//3.删除指定名字好友的信息   2
//4.查找好友信息    3
//5.修改好友信息   4
//6.打印好友信息   5
//7.排序    6

void menu()
{
	printf("************************************************\n");
	printf("*********** 1.add          2.del****************\n");
	printf("*********** 3.search       4.modify ************\n");
	printf("*********** 5.show         6.sort **************\n");
	printf("*********** 0.exit  ****************************\n");
	printf("************************************************\n");
}

int main()
{
	//创建通讯录
	struct Contact con;//con就是通讯录，里边包含：1000的元素的数和size

	//初始化通讯录
	InitContact(&con);

	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}










































































































































































































































































































































