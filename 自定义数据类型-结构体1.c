#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//复杂类型---自定义类型---》结构体，枚举，联合体

//结构是一些值的集合，这些值称为成员变量，结构的每一个成员可以是不同类型的变量

//结构体声明

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量（对象）
//描述学生：属性-名字+电话+性别

//struct Stu
//{
//	//成员变量
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局 变量
//
//struct Stu s3;  //全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;
//
//	return 0;
//}

//匿名结构体变量

//struct
//{
//	int a;
//	char c;
//
//}sa;
//int main()
//{
//	return 0;
//}
//
////匿名结构体指针类型
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	psa = &sa;//报警告，虽然成员变量一样，在编译器看来这两个是不同的类型的
//}

//匿名结构体的使用---只能用一次


//数据结构 -- 数据在内存中的存储结构

//链表
//在内存中存好   1 2 3 4 5  这5个数据 并且能够串连起来  找到1能够找到2一直顺着找下去

//struct Note
//{
//	int data;
//	struct Note n;//这样子定义是错误的 -- n里面包含一个data 并且包含有包含一个n --》一直包含
//	//sizeof(struct Note)---》算不了
//	//结构体自己包含自己类型的变量是做不到的
//};

//将存有1的内存空间中看成是由数据域和指针域
//结构体的自引用
//struct Note
//{
//	int data;//数据域
//	struct Note* next;//指针域
//	//用指针将1-2-3-4-5 串连起来
//	//这就是链表
//};
//
//
//int mian()
//{
//	return 0;
//}

//结构体重命名
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}


//结构体的初始化

//struct S
//{
//	char c;
//	int a;
//	double b;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = {'c',100,3.14,"hello bit"};//结构体的初始化
//	printf("%c %d %lf %s\n", s.c, s.a, s.b, s.arr);
//
//	return 0;
//}

//结构体中包含结构体

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double b;
//	char arr[20];
//};
//
//int main()
//{
////	struct S s = { 'c',100,3.14,"hello bit" };//结构体的初始化
//	struct S s = { 'c',{55.5,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.b, s.arr);
//	printf("%lf ", s.st.weight);
//	return 0;
//}


//结构体内存对齐

//1. 第一次成员与结构体变量偏移量为0的地址处
//2.其它成员变量要对齐到某个数字（对齐数）的整数倍的地址处
//    对齐数 ==  编译器默认的一个对齐数（vs 默认为8个字节）与该成员大小的较小值
//3.结构体的总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍


//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//
//	//以下表示内存空间 （ --- ） 表示内存空间
//	//一个c1   ---》  char类型的大小为1个字节
//	//存放int a时  对齐数（ 8/4 ===4  ）  a要放到这个对齐数的整数倍 
//	//c2        对齐数（8/1 === 1）  c2要放到这个对齐数的整数倍
//
//	// 1.  ----    （1-2空间）存放c1
//	// 2.  ----   
//	// 3.  ----
//	// 4.  ----    （4-8空间）这里存放a
//	//  5. ----
//	//  6. ----
//	//  7. ---- 
//	//  8. ----
//	// 9.  ----   （9-10空间）  存放c2
//	// 10  ----
//	// 11  ----
//	// 12  ----
//	// 13  ----
//	// 14  ----
//
//	//结构体的总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//	//    最大对齐数为4   ----   12
//
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}















































