#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	int*p2=(int*)realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}
//	return 0;
//}

//用realloc直接开辟空间

//int main()
//{
//	//int* p = realloc(NULL, 40);//功能等价于malloc(40)
//	return 0;
//}


//常见动态内存错误
//int main()
//{
//	//1.对NULL指针解引用操作
//	int* p = (int*)malloc(40);//有可能开辟失败--》malloc返回空指针
//	*p = 10;//有可能对空指针解引用
//
//	//如何避免  --》对p进行相关的判断
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//对动态开辟内存的越界访问

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i <= 10; i++)
//		{
//			*(p + i) = i;//越界访问了
//		}
//	}
//	free(p);//释放p指针指向的动态内存空间
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s ", strerror(errno));
//	}
//	//使用空间
//	int* p2 = realloc(p, 80);//malloc开辟的空间不够使用，用realloc进行调整
//	if (p2 != NULL)
//	{
//		p = p2;//调整 成功将开辟成功的地址赋各源地址
//	}
//	else
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);//功能等价于malloc(40)
//	return 0;
//}


//动态内存错误

//int main()
//{
//	//1.对NULL指针解引用操作
//	int* p = malloc(40);
//	*p = 10;//有可能对指针解引用---》malloc空间开辟失败--》对NULL解引用
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));//打印错误信息
//	}
//	return 0;
//}


//int main()
//{
//	//对动态内存开辟的内存越界访问
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		for (int i = 0; i <= 10; i++)
//		{
//			*(p + i) = i;//越界了
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	
//	//...
//	//对非动态开辟内存使用free释放
//
//	free(p);
//	p=NULL
//	return 0;
//}


//int main()
//{
//	//使用free释放动态开辟内存的一部分
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p++ = i;
//	}
//	//回收空间
//	free(p);//p已经指向的不是刚刚动态开辟内存的起始位置了
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	//对同一块动态内存的多次释放
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	//使用
//	//释放
//
//	free(p);
//	//...
//	free(p);
//
//	return 0;
//}
//
//#include<windows.h>
//
//int main()
//{
//	//对动态开辟内存忘记释放(内存泄露)
//	while (1)
//	{
//		malloc(1);
//	}
//	return 0;
//}

























































