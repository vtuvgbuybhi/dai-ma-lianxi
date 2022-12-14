#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//预处理指令
//   #define 、 #include 、 #pragma pack(4)  、 #if   等等  以#开头的

//#define 定义标识符

//#define STR "hehe"
//#define MAX 100
//int main()
//{
//	int max = MAX;
//
//	//预处理完   ：  int MAX =100;
//
//	printf("%d\n", max);
//
//	printf("%s\n", STR);
//	return 0;
//}


//#define 定义宏

//#define SQUARE(X) X*X
//int main()
//{
//	//int ret = SQUARE(5);
//	////预处理完   ：  int ret = 5*5 ；
//	//printf("%d\n", ret);
//
//
//	int ret = SQUARE(5 + 1);
//	//int ret= 5+1*5+1;   直接替换
//	printf("%d\n", ret);
//
//	return 0;
//}


//#define DOUBLE(X) X+X
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//
//	//int ret=10*a+a;
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//	printf("hel""lo ""world");
//	return 0;
//}



//如何把一个宏的参数 插入到字符串中
//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	PRINT(a);
//	//printf("the value of "a" is %d\n",a);
//
//	PRINT(b);
//	return 0;
//}


//## 可以把位于两边的符号合成1个符号

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int Class84 = 2019;
//	//printf("%d\n", Class84);
//
//	printf("%d\n", CAT(Class, 84));
//	//printf("%d\n",Class##84);
//	//printf("%d\n",Class84);
//	return 0;
//}


//带有副作用的宏参数

//int main()
//{
//	int a = 10;
//
//	//同样都能使b变成11
//	int b = a + 1;
//
//	int b = ++a;
//	//但是这种++a也改变了a的值---》有了副作用留有后遗症
//
//	return 0;
//}

//宏的参数带有副作用
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
////x>y?x:y   -->  若x>y 条件为真那么执行x    条件为假那么执行y
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max=((a++)>(b++)?(a++):(b++))
//	//（a++）>(b++)先使用后++   10>11条件为假  然后判断完a=11，b=12     执行将max=(b++)   执行完max=b++后  
//	// 就 b= 13
//
//	printf("max=%d\n", max);//12
//	printf("a=%d\n", a);//11
//	printf("b=%d\n", b);//13
//	
//	return 0;
//}


//宏和函数对比

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))

//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("%d\n", max);
//
//	//宏的方式
//	max = MAX(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int main()
//{
//
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//函数的方式
//	int max = Max(c, d);//强行赋给整形变量 ，报警告
//	printf("%d\n", max);
//
//	//函数在调用的时候
//	//会有函数调用和返回开销
//
//	//宏的方式
//	max = MAX(c, d);//这个就没有类型不符问题，直接替换
//	printf("%d\n", max);
//
//	//宏在预处理阶段完成替换
//	//没有函数调用和返回开销
//
//	return 0;
//
//}


//宏有时候可以做函数做不到的事情   :  比如 : 宏的参数可以是类型，是函数做不到的

//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//ret=sizeof(int);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


//#define MALLOC(num ,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* pa = MALLOC(10, int);
//	//int*pa=(int*)malloc(10*sizeof(int));
//
//	return 0;
//}


//#undef   ---》 指令用于移除一个宏定义

//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//
//#undef MAX
//
//	printf("%d\n", MAX);
//	//这里就不能用了
//	return 0;
//}


//                              #define                                               函数
//-------------------------------------------------------------------------------------------------------------------
//|  代码  |       每次使用时宏代码会插入到程序中去             |       函数代码只出现在同一个地方                  |
//|  长度  |     除了非常小的宏，否则程序长度会大幅增加         |         函数使用，调用同一份代码                  |
//|------------------------------------------------------------------------------------------------------------------
//|        |                                                    |    存在函数的调用和返回的额外开销                  |
//|  执行  |              更快                                  |         相对更慢                                   |
//|  速度  |                                                    |                                                    |
//|-------------------------------------------------------------------------------------------------------------------
//|        |         宏参数如果是表达式，传到宏内部的话         |  参数部分如果是表达式的话，在传参时                |
//|操作符  |直接替换，临近的操作符的优先级可能会产生不可        |   会提前计算好，函数是结果更容易预测               |
//|优先级  |             预料的结果                             |                                                    |
//|--------------------------------------------------------------------------------------------------------------------
//|带有副作|参数可能被替换到宏体中的多个位置，所以带有副作用的  |     函数参数只在传参的时候求值                      |
//|用的宏参|    参数求值可能会产生不可预料的结果                |       一次，结果更容易控制                          |
//|   数   |                                                    |                                                     |
//|--------------------------------------------------------------------------------------------------------------------
//|  参数  |     宏的参数与类型无关                             |   函数参数是与类型有关的，如果参数不同，就           |
//|  类型  |                                                    |          需要不同的函数                              |
//|--------------------------------------------------------------------------------------------------------------------
//|  调试  |      宏是不方便调试的                              |   函数是可以逐语句调试的                             |
//|---------------------------------------------------------------------------------------------------------------------
//|  递归  |    宏是不能递归的                                  |       函数是可以递归是                                |
//-----------------------------------------------------------------------------------------------------------------------





