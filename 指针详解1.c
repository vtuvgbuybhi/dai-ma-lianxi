#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�ַ�ָ��

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

//int main()
//{
//	char arr[] ="bhbni";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	char* p = "byuhbni";//��b�ĵ�ַ����p   --��byuhbni����һ�������ַ���
//
//	*p = 'w';
//	printf("%s", p);//����--�����޸�
//
//
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//�����ַ���
//
//	if (p1 == p2)//�����ַ���������Ҳ�����޸ģ��������ڴ�����ֻ��һ��
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)//��ͬ�ڴ��ַ
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//ָ������  ������----�������ָ���
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//
//	int* parr[4];//�������ָ�������--ָ������
//	char* pch[5];//����ַ�ָ�������--ָ������
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%d\n", *arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int sz = sizeof(parr) / sizeof(parr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//����ָ��--��ָ��
//int main()
//{
//	//int* p = NULL;//p������ָ��-ָ�����ε�ָ��--���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ��-ָ���ַ���ָ��--���Դ���ַ��ĵ�ַ
//
//	//����ָ��--ָ�������ָ��--�������ĵ�ַ
//	//int arr[10] = { 0 };
//	//arr--��Ԫ�صĵ�ַ
//	//&arr[0]--��Ԫ�صĵ�ַ
//	//&arr--����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//�����p����һ������ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];//ָ������
//	char* (*pa)[5] = &arr;//����ָ��
//	//(*pa)--˵��pa��ָ��
//	//[5]--paָ���������5��Ԫ�ص�
//	//char*  --paָ�������Ԫ��������char*��
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}
//	return 0;
//}

//�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}


// ����������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (int j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//
//}

//int main()
//{
//	int arr[3][5] = { { 1,2,3,4,5 }, { 2,3,4,5,6 }, { 3,4,5,6,7 } };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//int arr[5]   //arr��һ��5��Ԫ�ص���������
//int *parr1[5]  //parr1��һ������  ����Ԫ����10����ÿ��Ԫ��������int*  ָ������
//int��*parr2��[5]  //parr2��һ��ָ�룬ָ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ��������int

//int(*parr3[10])[5]  //parr3��һ������ ��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int





















