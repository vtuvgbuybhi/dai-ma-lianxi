#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;//�ַ�ָ��
//	char* p2 = "gvyugh";//��p2ָ����g
//
//	return 0;
//}

//int main()
//{
//	//ָ������---����--���ָ�������
//	int* arr[5];
//	char* ch[5];
//	//����ָ��
//	int* p3;//����ָ��--ָ�����ε�ָ��
//	char* p4;//
//
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//����ָ��--ָ�������ָ��   pa����һ������ָ��
//
//	return 0;
//}

//���鴫��
//void test(int arr[5][3])
//{}

//void test(int arr[][3])//�п���ʡ��
//{}

//void test(int arr[][])//err  ������������ʡ��
//{}

//void test(int(*p)[5])
//{}
//
//
//int main()
//{
//	int arr[5][3] = { 0 };
//	test(arr);
//	return 0;
//}

//void test(int* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int(*pa)[4] = &arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j=0; j < 4; j++)
//		{
//			//printf("%d ", *(* (pa + i) + j));
//			//printf("%d ",  ( * (pa + i))[j]);
//			//printf("%d ", *(pa[i] + j));
//			//printf("%d ", pa[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* pa = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(arr + i));
//		printf("%d ", *(pa + i));
//		//printf("%d ", pa[i]);//   arr[i]==*(arr+i)==*(pa+i)==pa[i]
//	}
//	//return 0;
//}



//����ָ�봫��--��������Щ����
//void test(int** p)
//{
//
//}
//
//
//int main()
//{
//	int* arr[]={0};
//	int* ptr;
//	int** pa = &ptr;
//	test(&ptr);
//	test(pa);
//	test(arr);
//	return 0;
//}



//����ָ��---ָ������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//printf("%d \n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);//&������ �� ������ ���Ǻ����ĵ�ַ
//	int(*pa)(int, int) = Add;
//	printf("%d ", (*pa)(a, b));
//
//	return 0;
//}

//void Print(char* pa)
//{
//	printf("%s\n", pa);
//}
//int main()
//{
//	char arr[] = "vytu";
//	void(*p)(char*) = Print;
//	(*p)(arr);
//	return 0;
//}

//������Ȥ�Ĵ���

//char* my_strcpy(char*dest,const char*str)
//{}
////1.дһ������ָ�� pf ���ܹ�ָ��my_strcpy
////2.дһ������ָ������ pfArr ���ܹ����4��my_strcpy�����ĵ�ַ
//int main()
//{
//	//1.char*(*pf)(char*, const char*);
//
//	//2.char*(*pfArr[4])(char*,const char*);
//
//	return 0;
//}











