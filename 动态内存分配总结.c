#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

//柔性数组--》结构体成员

//C99中，结构体的最后一个元素允许是未知大小的数组，这就叫做  柔性数组成员


//一种写法
//struct S
//{
//	int n;
//	int arr[0];//柔性数组
//};

//另一种写法

//struct S
//{
//	int n;
//	int arr[];//柔性数组
//};
//
//
//int main()
//{
////	printf("%d ", sizeof(struct S));//计算结构体的大小时，柔性数组的大小不包含在里面
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	//sizeof(struct S)是为了存放n的    ， 后面开辟10个整形是为了存放在arr上存放10个整形
//
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//
//	//后面觉得10个整形的空间不够用了
//	struct S* ptr = realloc(ps, 64);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}

//struct S
//{
//	int n;
//	int* arr;//arr指针
//};
//
//int main()
//{
//	struct S* p = (struct S*)malloc(sizeof(struct S));
//	p->n = 100;
//	p->arr =(int*) malloc(10 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p->arr);
//	p->arr = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}


//两次malloc和一次malloc的区别---》一次malloc不容易出错 两次malloc在内存释放的时候得注意先后顺序
//一次malloc就把空间开辟好的话 -->更节省内存  ， 并且效率更高
























































































































