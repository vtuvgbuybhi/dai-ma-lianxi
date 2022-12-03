#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 20
#define MAX 1000

//��ʼ��
void InitContact(struct Contact* ps)
{
	memset(ps->data, 0, sizeof(ps->data));
	ps->size = 0;
}

void ADDContact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("ͨѶ¼�Ѿ�����\n");
	}
	else
	{
		printf("����������˵�����:>");
		scanf("%s", ps->data[ps->size].name);

		printf("����������������:>");
		scanf("%d", &(ps->data[ps->size].age));//�����ر�Ҫע��  Ҫ���ȡ��ַ���ţ�Ҫ�����鲻��Ҫ��ӵ�ַ����

		printf("����������˵��Ա�:>");
		scanf("%s", ps->data[ps->size].sex);

		printf("����������˵ĵ绰:>");
		scanf("%s", ps->data[ps->size].tele);

		printf("����������˵ĵ�ַ:>");
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
		int i = 0;
		printf("%20s\t%5s\t%4s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

//��ͨ�����ֲ��ҵ��������˵�λ��---����װ�ɺ���
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
	printf("����ָ��ɾ���˵�����:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("�����˲�����\n");
	}
	else
	{
		int j = 0;
		for (j = pos; j < ps->size - 1; j++)
		{
			ps->data[j] = ps->data[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}

void SearchContact(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("��������˵�����:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("���ҵ��˲�����ͨѶ¼��\n");
	}
	else
	{
		printf("%20s\t%5s\t%4s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����:>");
	scanf("%s", name);
	int pos = FindByname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ��˲�����\n");
	}
	else
	{
		printf("����������˵�����:>");
		scanf("%s", ps->data[pos].name);

		printf("����������������:>");
		scanf("%d", &(ps->data[pos].age));//�����ر�Ҫע��  Ҫ���ȡ��ַ���ţ�Ҫ�����鲻��Ҫ��ӵ�ַ����

		printf("����������˵��Ա�:>");
		scanf("%s", ps->data[pos].sex);

		printf("����������˵ĵ绰:>");
		scanf("%s", ps->data[pos].tele);

		printf("����������˵ĵ�ַ:>");
		scanf("%s", ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
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




//1.���1000��������Ϣ -- ���� �绰 �Ա� ��ַ ����
//2.���Ӻ�����Ϣ      1
//3.ɾ��ָ�����ֺ��ѵ���Ϣ   2
//   �޸�ָ��������Ϣ   3
//   ����ָ��������Ϣ  4
//   ��ӡͨѶ¼   5
//    ����     6

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
	//����һ�����1000���˵�ͨѶ¼
	struct Contact con;
	//��ͨѶ¼��ʼ��
	InitContact(&con);
	do
	{
		menu();
		printf("���������:>");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}



















































































