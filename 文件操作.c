#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//��β����ļ�

#include<errno.h>
#include<string.h>
//int main()
//{
//	//���ļ�  test.txt
//	//  .. ��ʾ��һ��·��
//	//fopen("../test.txt", "r");
//	//fopen("test.txt", "r");//���·����д��
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//�ļ���˳���д

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//
//	//�ر��ļ�
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}


//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//���� -- ��׼�����豸   ---stdin
//��Ļ  --  ��׼����豸  --- stdout
//��һ������Ĭ�ϴ򿪵��������豸


//stdin
//stdout
//stderr

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//�Ӽ��̶�ȡһ���ı���Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼�����ȡ
//	fputs(buf, stdout);//�������׼�����
//	
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14f,"bit" };
	FILE* pf = fopen("test.txt", "w");

	if (pf == NULL)
	{
		return 0;
	}
	//��ʽ����д�ļ�


	return 0;
}





























































