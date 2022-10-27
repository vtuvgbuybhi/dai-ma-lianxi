#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//字符指针

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
//	char* p = "byuhbni";//将b的地址给了p   --“byuhbni”是一个常量字符串
//
//	*p = 'w';
//	printf("%s", p);//崩溃--不能修改
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
//	char* p2 = "abcdef";//常量字符串
//
//	if (p1 == p2)//常量字符串，反正也不能修改，所以在内存里面只存一份
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	//if (arr1 == arr2)//不同内存地址
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//	return 0;
//}

//指针数组  是数组----用来存放指针的
//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//
//	int* parr[4];//存放整形指针的数组--指针数组
//	char* pch[5];//存放字符指针的数组--指针数组
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

//数组指针--是指针
//int main()
//{
//	//int* p = NULL;//p是整形指针-指向整形的指针--可以存放整形的地址
//	//char* pc = NULL;//pc是字符指针-指向字符的指针--可以存放字符的地址
//
//	//数组指针--指向数组的指针--存放数组的地址
//	//int arr[10] = { 0 };
//	//arr--首元素的地址
//	//&arr[0]--首元素的地址
//	//&arr--数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	//上面的p就是一个数组指针
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];//指针数组
//	char* (*pa)[5] = &arr;//数组指针
//	//(*pa)--说明pa是指针
//	//[5]--pa指向的数组是5个元素的
//	//char*  --pa指向数组的元素类型是char*的
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

//参数是数组的形式
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


// 参数是数组指针的形式
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

//int arr[5]   //arr是一个5个元素的整形数组
//int *parr1[5]  //parr1是一个数组  数组元素有10个，每个元素类型是int*  指针数组
//int（*parr2）[5]  //parr2是一个指针，指向一个数组，数组有10个元素，每个元素类型是int

//int(*parr3[10])[5]  //parr3是一个数组 该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int





















