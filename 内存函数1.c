#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

// 内存操作函数

//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//将数组arr1的数据拷贝到arr2里面去
//
//	//char*dest  , const char*src---->字符串的地址
//
//	//strcpy(arr2, arr1);//这边是两个整形数组指针
//	//发现只arr2[0]=1被拷贝过去了
//
//	//当前机器是小端存储模式
//	//arr1在内存中的存放
//	// 一个整形占4个字节
//	// 01 00 00 00     02 00 00 00    03 00 00 00    04 00 00 00      05 00 00 00
//	
//	//strcpy   的拷贝是一个一个字节的拷贝下来的
//	//  拷贝  01  接下来拷贝 00   代表这"\0"拷贝停止了
//
//	//所以strcpy只能拷贝字符串
//
//	//memcpy   ,   memmove    ,memcpy  ,memset  ---->内存函数
//
//	//memcpy  ---》  内存拷贝
//	//void* memery(void* destination   ,  const void*source  ,size_t  num)
//	//num    --->   字节
//
//	//void*    --->  通用类型的指针  ---》 无类型指针
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//
//
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr1[] = { {"张三",15},{"李四",18} };
//	struct S arr2[2] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//那么我们要实现这样的一个memcpy的函数要怎么实现呢

//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	//num--   ---》先使用后减减
//	//以num=4为例
//	//num  =4  进入，不过num变成3
//	//num=3  进入   ，num变成2
//	//num=2 进入   ，num变成1
//	//num=1进入  ，num变成0
//	//下一次num=0时，条件不成立
//	{
//		*(char*)dest = *(char*)src;
//		//(char*)dest   --> 强制转换成（char*）类型  --》一次解引用访问一个字节的空间
//
//		++(char*)dest;//往后访问一个字节
//		++(char*)src;//往后访问一个字节
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr1[] = { {"张三",15},{"李四",18} };
//	struct S arr2[2] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}



//memmove  --- >用来解决内存重叠的情况

//c语言标准
//memcpy    ---  >只要处理 不重叠的内存拷贝就可以
//memmove    ----》 处理重叠内存的拷贝

//void* my_memery(void* dest, void* src, int n)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (n--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//如何将1 2 3 4 5数据拷贝到3 4 5 6 7 里面去
//	//int i = 0;
//	//my_memery(arr+2,arr,20);//出问题了
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	// 1 2 1 2 1 2 1 8 9 10
//	//内存重叠
//	// 1 2 3 4 5 6 7 8
//	// 1 2 1 4 5 6 7 8
//	// 1 2 1 2 5 6 7 8
//	// 1 2 1 2 1 6 7 8
//	// 1 2 1 2 1 2 7 8
//	// 1 2 1 2 1 2 1 8 
//
//	//memcpy(arr + 2, arr, 20);
//	memcpy(arr + 2, arr,20);//处理内存重叠的情况
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


















































