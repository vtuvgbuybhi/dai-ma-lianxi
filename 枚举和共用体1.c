#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//枚举类型
//enum Sex
//{
//	male,//枚举的可能取值 ---》 常量
//	female,
//	secret,
//};
//
//enum Color
//{
//	red,//0
//	green,//1
//	blue,//2
//};
//
//int main()
//{
////	enum Sex s= male;//s就是性别的一个变量   -->将变量赋值为male
////	s = female;//可以将s变量赋值为female   但是不能赋值为Sex中没有出现的可能值
//
//	printf("%d %d %d ", red, green, blue);
//
//	return 0;
//}

//
//enum Sex
//{
//
//	male=2,//枚举的可能取值 ---》 常量    male=2赋一个初始值
//	female=4,
//	secret=8,
//};
//
//int main()
//{
//	printf("%d %d %d", male, female, secret);
//	return 0;
//}

//enum Color
//{
//	red,
//	green,
//	blue,
//};
//
//int main()
//{
//	enum Color c = blue;//将变量c赋值为blue
//	enum Cloor c = 2;//int    这里赋值是有问题的---》左右两端类型是有差异的
//
//	return 0;
//}


//#define red 0
//#define green 1
//#define blue 2
//
//int main()
//{
//	//enum Color c=red；
//	int color = red;//很上面的写法是一样的
//
//	return 0;
//}


//为什么使用枚举
//1.增加代码的可读性和可维护性
//2.和#define 定义的标识符比较枚举有类型检查，更加严谨
//3.防止命名污染
//4.便于调试
//5.使用方便，一次可以定义多个常量


//联合-联合体-共用体

//union Un
//{
//	char c;
//	int i;    // c跟i占用同一块内存空间
//};
////5个字节
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//判断当前计算机的大小端存储

//int main()
//{
//	char arr[10] = "abc";
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	//低地址   --------------------》高地址
//	//....[][][11][22][33][44][][][][]....  -----》大端存储模式
//	//....[][][44][33][22][11][][][][]....   ---》小端存储模式
//	//谈论一个数据，存放在内存中存放字节顺序
//	//大小端字节序问题
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//00000000 00000000 00000000 00000001
//	// 00 00 00 01
//	int* pc = &a;
//	if (*(char*)pc==1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;//创建一个联合体变量u
//	u.i = 1;//给联合体中的i赋值一个1那么就涉及了大小端存储问题
//
//	// 00 00 00 01
//	//c与i共同占用同一块内存空间
//	// 01 00 00 00
//	//c占一个字节 就是 01
//
//	//返回1表示小端
//	//返回0表示大端
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}


//enum Sex
//{
//	male,//0
//	female,//1
//	secret,//2
//};
//int main()
//{
//	enum Sex s = male;//本质上取的是一个整形的值
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//联合体的大小至少是最大成员的大小
//当最大成员大小不是最大对齐数的整数倍的时候，就要对齐到最大对齐数的整数倍
//
//union Un
//{
//	int a;
//	char arr[5];//占5个字节
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}















