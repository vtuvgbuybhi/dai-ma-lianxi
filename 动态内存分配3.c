#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int*p2=(int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	return 0;
//}

//��reallocֱ�ӿ��ٿռ�

//int main()
//{
//	//int* p = realloc(NULL, 40);//���ܵȼ���malloc(40)
//	return 0;
//}


//������̬�ڴ����
//int main()
//{
//	//1.��NULLָ������ò���
//	int* p = (int*)malloc(40);//�п��ܿ���ʧ��--��malloc���ؿ�ָ��
//	*p = 10;//�п��ܶԿ�ָ�������
//
//	//��α���  --����p������ص��ж�
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//�Զ�̬�����ڴ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = i;//Խ�������
//		}
//	}
//	free(p);//�ͷ�pָ��ָ��Ķ�̬�ڴ�ռ�
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s ", strerror(errno));
//	}
//	//ʹ�ÿռ�
//	int* p2 = realloc(p, 80);//malloc���ٵĿռ䲻��ʹ�ã���realloc���е���
//	if (p2 != NULL)
//	{
//		p = p2;//���� �ɹ������ٳɹ��ĵ�ַ����Դ��ַ
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//���ܵȼ���malloc(40)
//	return 0;
//}


//��̬�ڴ����

//int main()
//{
//	//1.��NULLָ������ò���
//	int* p = malloc(40);
//	*p = 10;//�п��ܶ�ָ�������---��malloc�ռ俪��ʧ��--����NULL������
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));//��ӡ������Ϣ
//	}
//	return 0;
//}


//int main()
//{
//	//�Զ�̬�ڴ濪�ٵ��ڴ�Խ�����
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i <= 10; i++)
//		{
//			*(p + i) = i;//Խ����
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	
//	//...
//	//�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//
//	free(p);
//	p=NULL
//	return 0;
//}


//int main()
//{
//	//ʹ��free�ͷŶ�̬�����ڴ��һ����
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//���տռ�
//	free(p);//p�Ѿ�ָ��Ĳ��Ǹոն�̬�����ڴ����ʼλ����
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//ʹ��
//	//�ͷ�
//
//	free(p);
//	//...
//	free(p);
//
//	return 0;
//}
//
//#include<windows.h>
//
//int main()
//{
//	//�Զ�̬�����ڴ������ͷ�(�ڴ�й¶)
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

























































