#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//指针的运算


//指针+ - 一个整数
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

//2.指针是可以比较大小的
//int main()
//{
//	float values[5];
//	float* vp;
//	for (vp = &values[0]; vp < &values[5];)//指针进行大小的比较
//	{
//		*vp++ = 0;
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", &arr[9] - &arr[0]);//指针-指针=之间元素的个数
//	//printf("%d\n", &arr[0] - &arr[9]);
//
//	return 0;
//}

//求字符串长度

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
//	//strlen--字符串长度---方式1
//	//递归--模拟实现了strlen--方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//3.指针的关系运算
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
//指针和数组
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//地址--首元素的地址
//	printf("%p\n", arr + 1);
//
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组---取出的是整个数组的地址
//	//2.sizeof(arr)--sizeof(数组名)-数组名表示整个数组
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

//》》》》》》》二级指针

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//--二级指针
//
//
//	//printf("%d\n", **ppa);
//
//
//	//int*** pppa = &ppa;//--三级指针
//	return 0;
//}

//指针数组--数组
//数组指针--指针-存放指针的数组
//好孩子--孩子

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = 30;
//	//整形数组--存放整形
//	//字符数组--存放字符
//	//指针数组--存放指针
//
//	//int arr1[10];
//	int* arr2[3]={&a,&b,&c};//指针数组
//	//printf("%p\n", arr2[0]);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%p\n", arr2[i]);
//	}
//
//	return 0;
//}

























