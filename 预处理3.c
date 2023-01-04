#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//条件编译


//#define DEBUG

//int main()
//{
//	int arr[10] = { 1,2,3,4,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//		//这里的意思是说  DEBUG 要是未定义则  #ifdef   -- #endif  之间的内容不参与编译
//		//只要DEBUG 定义  不管定义什么都可以   则#ifdef   --  #endif 之间的内容参与编译
//#endif
//	}
//
//	return 0;
//}

//分支条件编译

//int main()
//{
//	int arr[10] = { 1,2,3,4,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0
//		printf("%d ", arr[i]);
//
//		//#if  后跟一个常量表达式   
//		//若常量表达式为真  #if   ---  #endif  之间代码执行  为假  不执行
//#endif
//	}
//	return 0;
//}

//多个分支条件编译

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("灰灰\n");
//#endif
//	return 0;
//}


//int main()
//{
////#if defined(DEBUG)
////	printf("haha\n");
////#endif
//	//意思是如果defined定义过DEBUG则编译中间的代码
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//
////两种写法是一致的
//	
//	return 0;
//}

//int main()
//{
//#if !defined(DEBUG)
//	printf("haha\n");
//
//	//没有定义DEBUG条件为真    编译
//	//定义了条件为假    不编译
//#endif
//	return 0;
//}

//嵌套指令


//文件的包含

//库文件的包含
//#include<>

//本地文件的包含
//#include""


//如何解决头文件重复包含的问题呢----->嵌套文件
//在每个头文件的开头写
//#ifndef __TEST_H__
//#define __TEST_H__
//   头文件内容
//#endif

//ifndef的意思是  __TEST_H__是否被定义  若没有被定义则编译中间代码
//                                       有被定义则不编译中间代码
//
////或者
//直接在头文件添加     #pragram once































































































