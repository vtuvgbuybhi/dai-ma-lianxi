#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//ָ�������


//ָ��+ - һ������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p=p + 1;
//	}
//
//	return 0;
//}

//2.ָ���ǿ��ԱȽϴ�С��
//int main()
//{
//	float values[5];
//	float* vp;
//	for (vp = &values[0]; vp < &values[5];)//ָ����д�С�ıȽ�
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", &arr[9] - &arr[0]);//ָ��-ָ��=֮��Ԫ�صĸ���
//	//printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}

//���ַ�������

//int my_strlen(char* str)
//{
//	char* star = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - star;
//}
//
//int main()
//{
//	//strlen--�ַ�������---��ʽ1
//	//�ݹ�--ģ��ʵ����strlen--��ʽ2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//3.ָ��Ĺ�ϵ����
//int main()
//{
//	int arr[5];
//	int* pa;
//	for (pa = &arr[5]; pa > &arr[0];)
//	{
//		*--pa = 0;
//	}
//	return 0;
//}
//ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ--��Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	//1.&arr-&������-������������Ԫ�صĵ�ַ-��������ʾ��������---ȡ��������������ĵ�ַ
//	//2.sizeof(arr)--sizeof(������)-��������ʾ��������
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%p=====%p\n", p + i, &arr[i]);
//	//}
//	return 0;
//}

//������������������ָ��

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//--����ָ��
//
//
//	//printf("%d\n", **ppa);
//
//
//	//int*** pppa = &ppa;//--����ָ��
//	return 0;
//}

//ָ������--����
//����ָ��--ָ��-���ָ�������
//�ú���--����

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = 30;
//	//��������--�������
//	//�ַ�����--����ַ�
//	//ָ������--���ָ��
//
//	//int arr1[10];
//	int* arr2[3]={&a,&b,&c};//ָ������
//	//printf("%p\n", arr2[0]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr2[i]);
//	}
//
//	return 0;
//}

























