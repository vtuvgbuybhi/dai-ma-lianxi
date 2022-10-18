#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//结构体的声明
//定义一个学生结构体--描述一个学生

//struct  结构体关键字    Stu--结构体标签     struct Stu--结构体类型
//struct Stu//定义一个结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}s1,s2,s3;//三个全局结构体变量
//
//int main()
//{
//	//struct Stu s;//--创建局部结构体变量
//	struct Stu s1 = { "张三",20,"487445445","男" };//结构体初始化
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;//结构体中可以包含其它结构体
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "fvthgvb";
//	struct T t = { "hell0",{100,"b","helll,woeld",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	return 0;
//}

//typedef struct Stu//定义一个结构体类型
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[20];
//	char sex[5];
//}Stu;//三个全局结构体变量
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//}
//void Print2(Stu* pa)
//{
//	printf("name:%s\n", pa->name);
//	printf("age:%d\n", pa->age);
//	printf("tele:%s\n", pa->tele);
//}
//
//int main()
//{
//	Stu s = { "李四",40,"2626262","男" };
//	//打印结构体数据
//	Print1(s);
//	Print2(&s);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int ret=Add(a, b);
//	printf("%d\n", ret);
//	return 0;
//}






















