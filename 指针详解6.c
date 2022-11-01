#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	int a[] = { 1,2,3,4 };
//	//数组名是首元素的地址--有两个例外---sizeof（）是计算整个数组的大小表示整个数组  另一个是&数组名表示整个数组
//
//
//	printf("1==%d\n", sizeof(a));//计算的是整个数组大小
//
//	printf("2==%d\n", sizeof(a + 0));//首元素地址大小 32位平台是4个字节---64位平台是8个字节
//
//	printf("3==%d\n", sizeof(*a));//数组名表示首元素地址，*a计算首元素 ，sizeof（*a）就是4
//
//	printf("4==%d\n", sizeof(a + 1));//数组的第二个元素的地址大小32位平台是4个字节--64位平台上是8个字节
//	printf("5==%d\n", sizeof(a[1]));//第二个元素的大小
//	printf("6==%d\n", sizeof(&a));//数组地址的大小
//
//	printf("7==%d\n", sizeof(*&a));//&a是数组的地址--数组的地址解引用访问的数组，sizeof计算的计算数组的大小
//
//	printf("8==%d\n", sizeof(&a + 1));//&a+1跳过整个数组 还是一个地址--只要是地址在32位平台上计算4个字节 64位平台上是8个字节
//
//	printf("9==%d\n", sizeof(&a[0]));
//	printf("10==%d\n", sizeof(&a[0] + 1));
//
//	return 0;
//}

#include<string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f'};
//
//	printf("1==%d\n", strlen(arr));//随机值 直到遇到"\0"
//	printf("2==%d\n", strlen(arr + 0));//随机值
////	printf("3==%d\n", strlen(*arr));///'a'--97  相当于97作为一个地址是有问题的--程序崩溃
////	printf("4==%d\n", strlen(arr[1]));///'b'--98  相当于98作为一个地址一样是有问题的
//	printf("5==%d\n", strlen(&arr));//随机值
//	printf("6==%d\n", strlen(&arr+1));//随机值
//	printf("7==%d\n", strlen(&arr[0]+1));//随机值


	//printf("1==%d\n", sizeof(arr));
	//printf("2==%d\n", sizeof(arr + 0));
	//printf("3==%d\n", sizeof(*arr));
	//printf("4==%d\n", sizeof(arr[1]));
	//printf("5==%d\n", sizeof(&arr));
	//printf("6==%d\n", sizeof(&arr+1));
	//printf("7==%d\n", sizeof(&arr[0] + 1));

//	return 0;
//}





























































