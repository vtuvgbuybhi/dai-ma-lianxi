#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
//struct S4
//{
//	char c1;
//	struct S3 s1;
//	double i;
//};
//
//int main()
//{
//	//struct S3 s3 = { 0 };
//	//printf("%d\n", sizeof(s3));
//	//取内存中的一块内存
//	//一个double 8个字节，从起始位置开始放
//
//
//	// 1.  ----      》放double
//    // 2.  ----
//	// 3.  ----
//	// 4.  ----
//	// 5.  ----
//	// 6.  ----
//	// 7.  ----
//	// 8.  ----       double占据 1 -8 的内存空间  8个字节
//	// 9.  ----       》存放c
//	//10.  ----
//	//11.  ----
//	//12.  ----       》存放i
//	//13.  ----
//	//14.  ----
//	//15.  ----
//	//16.  ----       这是最小对齐数（4）的整数倍
//
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	//结构体中嵌套结构体大小该如何计算
//	//s3占16个字节   --->如何找s3的对齐数    --》找到s3的最大对齐数   为8（从8的倍数开始存放）
//
//	// 1.   ----      》这个位置放c1
//	// 2.   ----     
//	// 3.   ----
//	// 4.   ----
//	// 5.   ----
//	// 6.   ----
//	// 7.   ----
//	// 8.   ----        》s3从这里开始存放
//	// 9.   ----
//	// 10.  ----
//	// 11.  ----
//
//
//	// 24    ----     》s3存放到这里就结束了
//	// 25    ----     》i从这里开始存放
//	// 32    ----     》i到这里就结束了
//
//	//找到成员变量里的最大对齐数（8），那么结构体的大小为最大对齐数的整数倍---》刚好为32
//	return 0;
//}

//结构体对齐就是用空间换时间

//


//设置默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c;//1
//	//3
//	double b;//8
//};
//#pragma pack()//取消默认对齐数
//
////struct S
////{
////	char c;//1
////	//7
////	double b;//8
////};
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//
////	offsetof();//计算结构体成员相对于起始位置的偏移量
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


struct S
{
	int a;
	char c;
	double d;
};

//void Init(struct S tmp)//tmp只是s结构体的复制一份，改变tmp，并不能改变s内部的数据
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Tnit(s);//通过函数将结构体初始化为我们想要的数据
//	//这种传参是不行的，必须传&s才是可以的
//
//	return 0;
//}



//void Init(struct S *ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//函数内部想改变函数外部的值，必须把值的地址传过去
//
//	Print1(s);//只是将s的内容打印，不需要进行修改s的数据
//	Print2(&s);
//	return 0;
//}


























































