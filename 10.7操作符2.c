#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//前置++，先++，后使用
//	printf("%d\n", a++);//后置++，先使用，后面++
//
//	return 0;
//}
//void test1(int arr[])//数组传参时，传过去的是首元素的地址，用指针来接收，64为操作系统指针8个字节，32为操作系统指针4字节
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//逻辑与&&和逻辑或|| 的区别
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//两个同时为真，才为真
//	int f = a || b;//只要有一个为真就为真
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
// a=0，所以后面的++b,d++都不会运行
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//条件操作符  == 三目操作符 
//exp1 ？ exp2 : exp3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = 0;
//	b = (a > 5 ? 3 : -3);//三目操作符
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);//a>b条件为真返回a，条件为假返回b
//	printf("%d", max);
//	return 0;
//}
//创建一个结构体类型-struct stu
//struct stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用sturct stu 这个类型创建了一个学生对象s1，并初始化
//	struct stu s1 = {"张三",20,"2154125454"};
//	struct stu* ps = &s1;
//
//	//printf("%s\n",(*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
// //结构体变量.成员名
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011  -  a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111--b
//
//	//a和b如何相加
//	//00000000000000000000000000000001
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	char c = a + b;
//	//10000010--c
//	//1111111111111111111111111100000010--补码
//	//1111111111111111111111111100000001--反码
//	//1000000000000000000000000011111110--源码==-126
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	return 0;
//}
































