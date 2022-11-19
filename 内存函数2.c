#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<assert.h>
#include<string.h>

//memmove  ---  内存函数 ---处理内存重叠问题

//my_memmove(void* dest, void* src, int count)
//{
//	void* ret = dest;
//	assert(dest && src);
//
//	//src  ---> 由前向后
//	if (dest < src)
//	{
//		*((char*)dest) = *((char*)src);
//		++(char*)dest;
//		++(char*)src;
//	}
//	//src  ---》由后向前
//	else
//	{
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//
//}
//
//
//// int arr[]={1,2,3,4,5,6,7,8,9,10}
////将 1，2，3，4，5  拷贝到   3，4，5，6，7
////与 3，4，5，6，7  拷贝到   1，2，3，4，5
////两种拷贝  ---  是不一样的
//
////s1=1，2，3，4，5  --  拷贝到 s2=3，4，5，6，7   dest   --》p2  --目的地指针指向 --》3   src --》  p1 指针指向---》1
////将p1的指针若是从  1  开始向左移动到5 是不可行的 --》p2的 3 被拷贝成 1  后4拷贝成2  这时候 p1指向的是s1的3了，可是s1与s2指向的是同一块
////内存地址   使得s1 的 3 也变成了1 同理 4变成了 2 出现了内存重叠问题  所以这种指针的移动是不行的
//
////指针p1应该一开始指向 5  由5开始向前开始拷贝   当然p2也应该指向7  这样就不会出现内存重叠问题了
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	//将 1，2，3，4，5    拷贝到  3 4 5 6 7 
//	//memmove(arr + 2, arr, 20);
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//实现memmove
//	my_memmove(arr + 2, arr, 20);
//	//将 1 2 3 4 5  拷贝到 3 4 5 6 7 
//	return 0;
//}


//memcpy   --》 内存比较

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,3,4 };
//	int ret = memcmp(arr1, arr2, 8);
//	// 返回1  表示前8字节大小一样
//	printf("%d\n", ret);
//	return 0;
//}

//memset  -- 》内存设置

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//
//	int arr[10] = { 0 };
//	//01 01 01 01 01 01 01 01 01 01  00 00 00 ...
//	memset(arr, 1, 10);
//
//	return 0;
//}










