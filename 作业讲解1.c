#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <=5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	//以下写法正确的原因
//	//p=arr   -----》数组名指的是首元素地址，首元素地址存放在整形指针里是没问题的
//	
//	//int(*ptr)[10]=&arr ---->取出数组的地址，放在数组指针里也是没问题的
//	//（*ptr）是一个指针  ---》指针指向的是一个含有10个元素，每个元素是整形的数组
//  除了sizeof(arr)和&arr 中表示的是整个数组-  --->其它地方出现的arr均表示首元素地址
// 
// 
// 
//	//int*(*ptr)[10]  ---指针数组的指针
//	//（*ptr）是一个指针  ---》指针指向的是一个含有10个元素，每个元素是指针的数组
//
//	//p=&arr   -->errors
//	//指针数组的地址应存放在数组指针变量里  ---> 不能存在整形指针里
//
//
//	return 0;
//}


//哪一个是函数指针

//A.int* fun(int a,int b)
//fun(int a,int b)这是一个函数--->函数前面加一个int* 是函数的返回值 ---->总结这是一个函数声明

//B.int(*)fun(int a,int b)
//没有这种写法

//C.int(*fun)(int a,int b)
//(*fun)是一个指针---->指针指向的是一个函数--->函数的返回类型是int

//D.(int*)fun(int a,int n)
//fun(int a,int b)是一个函数 ----> 函数的返回类型是(int*)----->函数声明


//分析  -->  int(*(*F)(int a,int b))(int)

//(*F) 是一个指针  --> (*F)(int a,int b)指向是是一个函数
//int(*       )(int)  --->把函数指针去掉 --->剩下的就是函数的返回类型的了
//返回类型--->(* )是一个指针   --->(* )(int)指向的是一个函数 --->函数的返回类型是一个整形
//返回类型总结--->返回了一个函数指针,指针指向的这个函数参数只有int,返回类型的int


//分析 ----->int(*(*p)[10])(int *)    ---->函数指针数组的指针

//(*p)是一个指针 --->(*p)[10]指针指向的是一个函数10个元素数组
//int(*   )(int *)剩下的是数组每个元素的类型--->(* )是一个指针-->(* )(int *)指针指向的是一个函数-->函数的返回类型是int


//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa+1--->跳过的是aa[2][5]一整个数组
//
//	int* ptr2= (int*)(*(aa + 1));
//	//(aa+1)拿到第二行的地址
//	//*(aa+1)拿到的是第二行的数组---->*(aa+1) = aa[1]  -->本质就是拿到了第二行的数组名
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}


//编程题
//实现一个函数,可以左旋字符串中的k个字符
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

//旋转字符串
//法一
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	//求字符长度
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	//左旋字符串
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}

//法2
//三步旋转法
//左旋两个
//abcdef
// ba fedc
// cdefab

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);//断言  ---当arr是空指针时报错  --另一种写法是assert(arr!=NULL)
//	int len = strlen(arr);
//	assert(k <= len);//断言  ---当不满足括号内的条件时报错
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整个字符串
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	//左旋字符串
//	left_move(arr, 3);
//	printf("%s\n", arr);
//	return 0;
//}


//判断一个字符串是否为另外一个字符串旋转之后的字符串

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);//断言  ---当arr是空指针时报错  --另一种写法是assert(arr!=NULL)
//	int len = strlen(arr);
//	assert(k <= len);//断言  ---当不满足括号内的条件时报错
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整个字符串
//}
//
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);//判断两个字符串是否相等--->相等返回0
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}







































