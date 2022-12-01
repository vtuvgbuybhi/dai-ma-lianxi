#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//首先实现冒泡排序

//void Bubblesort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//
//
//
//}
//
//void test1()
//{
//	int arr[10] = { 8,9,1,2,3,4,5,6,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	Bubblesort(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	return 0;
//}

//但是以上的排序方法只能针对整形数组进行排序
//但是基本上所以任意类型的数组都是用这种方法进行比较的

//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//int cmp_int(void* e1, void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
//void Bubblesort(void*base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j+1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//void test2()
//{
//	int arr[10] = { 8,9,1,2,3,4,5,6,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	printf("\n");
//	Bubblesort(arr, sz,sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	test2();
//	return 0;
//}



//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_s_age(void* e1, void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//void swap(char* buf1, char* buf2, int width)
//{
//	for (int i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void Bubblesort(void* base, int sz, int width, int(*cmp)(void* e1, void* e2))
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width,(char*)base + (j + 1) * width) > 0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
//
//void test2()
//{
//	struct Stu s[3] = { {"abc",15},{"bcd",13},{"yyy",45} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	Bubblesort(s, sz, sizeof(s[0]), cmp_s_age);
//}
//
//int main()
//{
//	test2();
//	return 0;
//}



































































































































































