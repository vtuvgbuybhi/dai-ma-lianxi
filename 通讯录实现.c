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

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX];//���һ����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};




void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;//����ͨѶ¼���ֻ��0��Ԫ��
}

void AddContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");
	}
	else
	{
		printf("����������>:");
		//name��һ����������֣���������ʾ��Ԫ�ص�ַ�����ﲻ��Ҫ��ȡ��ַ����
		scanf("%s", ps->data[ps->size].name);

		printf("����������>:");
		scanf("%d", &(ps->data[ps->size].age));

		printf("�������Ա�>:");
		scanf("%s", ps->data[ps->size].sex);

		printf("������绰>:");
		scanf("%s", ps->data[ps->size].tele);

		printf("�������ַ>:");
		scanf("%s", ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		if (ps->size == 0)
		{
			printf("ͨѶ¼Ϊ�ո�\n");
		}
		else
		{
			int i = 0;
			//����
			printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
			//����
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



//static����������
//1.static���ξֲ��������ӳ��˾ֲ���������������
//2.static����ȫ�ֱ�������ȫ�ֱ��������������仯��������������û�б仯��ֻ�����Լ����ڵ�Դ�ļ�ʹ��
//3.static���κ������ú���ֻ����test.c������

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
	printf("����Ҫɾ���˵�����:>");
	scanf("%s", name);
	//����ɾ������ʲôλ��
	//�ҵ��˷���1     û�ҵ�����-1
	int pos = FindByNAME(ps, name);//�������Ĳ��ҷ�װ�ɺ���

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
		printf("Ҫɾ�����˲�����\n");
	}
	//ɾ��
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[pos] = ps->data[pos + 1];//�ú����Ԫ�ظ���Ҫɾ����Ԫ��
		}
		ps->size--;//ɾ���ˣ��������Ԫ�ؼ���һ��
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������˵�����:>");
	scanf("%s", name);
	int pos = FindByNAME(ps, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
	}
	//��ӡ��������Ϣ
	else
	{
		printf("%20s\t%4s\t%5s\t%12s\t%20s", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByNAME(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸��˵���Ϣ������\n");
	}
	else
	{
		printf("����������>:");
		//name��һ����������֣���������ʾ��Ԫ�ص�ַ�����ﲻ��Ҫ��ȡ��ַ����
		scanf("%s", ps->data[pos].name);

		printf("����������>:");
		scanf("%d", &(ps->data[pos].age));

		printf("�������Ա�>:");
		scanf("%s", ps->data[pos].sex);

		printf("������绰>:");
		scanf("%s", ps->data[pos].tele);

		printf("�������ַ>:");
		scanf("%s", ps->data[pos].addr);

		printf("�޸����\n");

	}

}





//1.���1000��������Ϣ -- ���� �绰 �Ա� ��ַ ����
//2.���Ӻ�����Ϣ      1
//3.ɾ��ָ�����ֺ��ѵ���Ϣ   2
//4.���Һ�����Ϣ    3
//5.�޸ĺ�����Ϣ   4
//6.��ӡ������Ϣ   5
//7.����    6

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
	//����ͨѶ¼
	struct Contact con;//con����ͨѶ¼����߰�����1000��Ԫ�ص�����size

	//��ʼ��ͨѶ¼
	InitContact(&con);

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}










































































































































































































































































































































