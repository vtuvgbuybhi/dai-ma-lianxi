#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int* p = &a;//指针变量
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//不同类型指针大小
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//不同指针类型的作用
// 指针类型决定了指针进行解引用操作的时候，能够访问内存空间的大小
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
//	int* p = arr;//数组名，存放首元素的地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}

//野指针的概念


//1.未初始化的指针变量
//int main()
//{
//	int* p;//局部变量不初始化，里边默认放的是一个随机值
//	*p = 20;
//
//	return 0;
//}

//2.指针越界访问
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

//3.指针指向的内存空间被释放了
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
























