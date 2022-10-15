#define _CRT_SECURE_NO_WARNINGS

//1.用冒泡法对整数进行排序
#include<stdio.h>
//#define N 10//设定比较数字的个数
//int main()
//{
//	int i, j, t,f ,a[11];
//	printf("输入10个数: ");
//	for (i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);//重键盘中输入10个数
//	}
//	for (i = 0; i < N - 1; i++)//比较需要的趟数
//	{
//		for (j = 1; j < N  - i; j++)//每趟需要比较的次数
//		{
//			if (a[j] < a[j - 1])
//			{
//				t = a[j];
//				a[j] = a[j - 1];
//				a[j - 1] = t;
//			}
//		}
//	}
//	printf("排序后的数组:");
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", a[i]);
//	//}
//	int* pa = a;
//	for (f = 0; f < 10; f++)
//	{
//		printf("%d ", *(pa + f));
//	}
//	return 0;
//}

//2.创建一个整形数组
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr, sz);
//	printf("\n");
//	Reverse(arr, sz);
//	Print(arr, sz);
//
//	return 0;
//}

//3.交换两数组内容--两数组一样大
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int temp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	return 0;
////}
//int i;//全局变量，不初始化，默认是0
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001源码
//	//11111111111111111111111111111110反码
//	//11111111111111111111111111111111补码
//
//	//
//	if (i > sizeof(i))//计算变量类型所占内存的大小 》=0  无符号数
//	{
//		printf(">\n");
//	}
//	if (i < sizeof(i))
//	{
//		printf("<\n");
//	}
//	return 0;
//}
































