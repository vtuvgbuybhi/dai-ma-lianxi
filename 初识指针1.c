#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int* p = &a;//ָ�����
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//��ͬ����ָ���С
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//��ָͬ�����͵�����
// ָ�����;�����ָ����н����ò�����ʱ���ܹ������ڴ�ռ�Ĵ�С
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	//*pa = 0;
//	//char* pc = &a;
//	//*pc = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//�������������Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//Ұָ��ĸ���


//1.δ��ʼ����ָ�����
//int main()
//{
//	int* p;//�ֲ���������ʼ�������Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//
//	return 0;
//}

//2.ָ��Խ�����
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int* p = &a;
//	for (i = 0; i <= 12; i++)
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}

//3.ָ��ָ����ڴ�ռ䱻�ͷ���
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p=test();
//	printf("%d\n", *p);
//	return 0;
//}
























