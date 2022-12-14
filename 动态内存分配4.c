#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//笔试题

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}

//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//p是GetMemory的型参变量 --》在GetMemory内部有效，出了就无效了
//
//	//str还是空指针
//	strcpy(str, "hello world");//空指针没有指向有效的内存地址，访问内存失败，程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	//运行代码程序崩溃的现象
//	//存在内存泄露的问题  ---》 
//	//str 以值传递的形式给p
//	// p是GetMemory函数的形参，只能在函数内部有效
//	//等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄露
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}


//如何改正确

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//p是GetMemory的型参变量 --》在GetMemory内部有效，出了就无效了
//
//	//str还是空指针
//	strcpy(str, "hello world");//空指针没有指向有效的内存地址，访问内存失败，程序崩溃
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	//运行代码程序崩溃的现象
//	//存在内存泄露的问题  ---》 
//	//str 以值传递的形式给p
//	// p是GetMemory函数的形参，只能在函数内部有效
//	//等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄露
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}

//改正2

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	//p是GetMemory的型参变量 --》在GetMemory内部有效，出了就无效了
//
//	//str还是空指针
//	strcpy(str, "hello world");//空指针没有指向有效的内存地址，访问内存失败，程序崩溃
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	//运行代码程序崩溃的现象
//	//存在内存泄露的问题  ---》 
//	//str 以值传递的形式给p
//	// p是GetMemory函数的形参，只能在函数内部有效
//	//等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄露
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}


//面试题
//char* GetMemory(void)
//{
//	char p[] = "hello world";//函数局部变量，只在函数内部有效--》出了函数销毁
//	return p;//返回栈空间的地址问题
//}
//
//void test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//非法访问内存
//}
//
//int main()
//{
//	test();
//	return 0;
//}




////这种写法也是有问题的
//int* test()
//{
//	int a = 10;//栈区上开辟
//	return &a;
//}
//
//int main()
//{
//	int*p=test();
//	*p = 20;//非法访问
//	return 0;
//}


//这种写法是可取的
//int* test()
//{
//	//static修饰局部变量的时候，生命周期变长了
//	//出了这个函数不销毁
//	static int a = 10;//放在静态区了
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//这种写法是可取的

//ptr变量销毁，但是ptr原本指向的那块内存没有销毁，在销毁之前将ptr指向的那块内存传给了p指针变量
//int* test()
//{
//	int* ptr = malloc(100);//堆区上开辟
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

	
//指出代码的问题
//int* f1(void)
//{
//	int x = 10;//栈区上开辟
//	return &x;
//	//返回x的地址---》出了函数x地址销毁
//	//万一有其它指针接受了f1返回的值--->及可能造成非法访问的问题
//}



//int* f2(void)
//{
//	int* ptr;
//	//ptr是一个未初始化的局部指针
//	//指针里存的是未知量---》野指针
//
//	*ptr = 10;//对野指针进行赋值，可能引发非法访问内存的问题
//
//
//	return ptr;
//}






































