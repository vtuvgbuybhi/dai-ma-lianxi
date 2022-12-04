#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

//当前我们知道的内存使用方式：
//创建一个变量

//int a = 10;//局部变量  ----》在栈区域开辟内存空间
//int g_a = 10;//全局变量   ---》在静态区开辟空间

//内存
 //      |——————————————|
 //      |                            |   ---》栈区  --》局部变量  和函数的形式参数
 //      |                            |
 //      | ————————————— |
 //      |                            |
 //      |                            |  ---》堆区   --》动态内存分配
 //      |                            |
 //      |                            |
 //      |  ————————————  |
 //      |                            |
 //      |                            |
 //      |                            |  ---》静态区 --》全局变量  和 静态变量 
 //      |                            |       statint  int  a=10；
 //      |                            |
 //      |——————————————|


//创建一个数组

//int arr[10];



//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//存放50个学生struct S 类型数据
//	//30个学生  浪费了一部分的空间
//	//60个学生  不够
//	return 0;
//}


//动态内存分配函数  --》 malloc   free  calloc    realloc



//int main()
//{
//	//malloc ---->  void* malloc(size_t size)
//	//size_t    --> 无符号整形  
//	//malloc 函数返回的是一个   void*指针
//
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(10 * sizeof(int));
//	//有可能开辟空间失败的情况
//
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//		//strerror   --》 可以把错误码所对应的错误信息打印出来
//		//errno  --》 全局错误码  --》调用malloc失败了，会把对应的错误信息错误码放在errno里面去 --->strerror会把errno里面的错误码转换成错误信息
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	//malloc ---->  void* malloc(size_t size)
//	//size_t    --> 无符号整形  
//	//malloc 函数返回的是一个   void*指针
//
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	//有可能开辟空间失败的情况
//
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//		//strerror   --》 可以把错误码所对应的错误信息打印出来
//		//errno  --》 全局错误码  --》调用malloc失败了，会把对应的错误信息错误码放在errno里面去 --->strerror会把errno里面的错误码转换成错误信息
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不在使用的时候
//	//就应该还给操作系统
//	free(p);
//
//	return 0;
//}








































































































































































































