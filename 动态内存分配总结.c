#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//��������--���ṹ���Ա

//C99�У��ṹ������һ��Ԫ��������δ֪��С�����飬��ͽ���  ���������Ա


//һ��д��
//struct S
//{
//	int n;
//	int arr[0];//��������
//};

//��һ��д��

//struct S
//{
//	int n;
//	int arr[];//��������
//};
//
//
//int main()
//{
////	printf("%d ", sizeof(struct S));//����ṹ��Ĵ�Сʱ����������Ĵ�С������������
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	//sizeof(struct S)��Ϊ�˴��n��    �� ���濪��10��������Ϊ�˴����arr�ϴ��10������
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//�������10�����εĿռ䲻������
//	struct S* ptr = realloc(ps, 64);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;//arrָ��
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr =(int*) malloc(10 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}


//����malloc��һ��malloc������---��һ��malloc�����׳��� ����malloc���ڴ��ͷŵ�ʱ���ע���Ⱥ�˳��
//һ��malloc�Ͱѿռ俪�ٺõĻ� -->����ʡ�ڴ�  �� ����Ч�ʸ���
























































































































