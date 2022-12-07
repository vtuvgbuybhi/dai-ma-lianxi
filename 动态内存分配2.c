#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	//向内存申请10个整形的空间
//	int* p =(int*) malloc(10*sizeof(int));
//	//(int*)强制类型转换  malloc返回的是void*指针类型
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//开辟成功，正常使用空间
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不在使用的时候
//	//就一个还给操作系统
//	free(p);
//
//	return 0;
//}


//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	//(int*)强制类型转换  malloc返回的是void*指针类型
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//开辟成功，正常使用空间
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不在使用的时候
//	//就一个还给操作系统
//	free(p);
//	//虽然free（p）p指向的那块内存空间释放了  但是指针p没有发生变化  我们依然能够找到这块内存空间是非常危险的
//	p = NULL;//p赋值为空指针--》那么p就彻底与之前指向的那块内存空间失去联系
//	
//	return 0;
//}


//calloc函数

//int main()
//{
//	//malloc(10*sizeof(int))//算出总大小字节数
//	int* p = (int*)calloc(10, sizeof(int));//10个元素  ，每个元素的大小是4个字节
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//free函数是用来释放动态开辟的空间的
//	p = NULL;
//	return 0;
//}


//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	int*p=(int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}//在使用malloc开辟的20个字节的空间
//	//假设这里20个字节不能满足使用要求了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//void* realloc(void* memblock, size_t size);
//
//	int*p2=realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}//在使用malloc开辟的20个字节的空间
//	//假设这里20个字节不能满足使用要求了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//
//	//void* realloc(void* memblock, size_t size);
//
//	p = realloc(p, 4000);//这么写是有很大的风险
//	//realloc 使用注意事项
//	//1.如果p指向空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间，
//	//最后返回新开辟的内存空间地址
//	
//	//3.得用一个新的变量来接受realloc函数的返回值
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;//这里是避免realloc开辟失败，导致p直接赋值成空指针，找不到原来的内存空间
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
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}


//1.  ---》   对空指针进行解引用操作
//int main()
//{
//	//以下写法都是有问题的  --》malloc的返回值一定要进行判断
//	int* p =(int*) malloc(40);
//	//万一malloc失败了，p赋值为NULL
//
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//对空指针进行加i还是空指针  --》 对空指针进行解引用有问题
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.对动态内存空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;//越界访问
//		}
//	}
//	free(p);//释放动态开辟的内存
//	p = NULL;
//	return 0;
//}

//对非动态内存开辟空间进行free
//int main()
//{
//	int a = 10;//在栈区开辟的空间
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

































































































