#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strlen  ---  遇到"\0"才停止

//int main()
//{
//	//int len = strlen("bgyub");//末尾存在"\0"
//
//	char arr[] = { 'a','b','c' };//啥时后遇到"\0"不知道
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//模拟实现strlen功能
//1.计数器的方法
//2.递归
//3.指针-指针

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')//递归循环的结束条件
//	{
//		return 0;
//	}
//	return 1 +  my_strlen(str + 1);
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL); //断言指针，保证指针的有效性
//	char* stop = str;
//	while (*stop != '\0')
//	{
//		stop++;
//	}
//	return stop - str;
//}

//int main()
//{
//	//int len = my_strlen("gyuih");
//	
//	if (strlen("vgu") - strlen("ftghyj") > 0)
//	//size_t strlen(const char* str) ---  库里面strlen返回的值类型
//	//size_t 就是unsigned int
//		// 3        -       6  =  -3
//		// -3 在内存存的是补码
//		//实际上-3在内存里当成是unsigned int 处理的时后一定是一个大于0的数
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}


//   strcpy --字符串拷贝

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//	char* ret = dest;
//
//	//拷贝src指向的字符串到dest指向的空间，包含"\0"
//	while (*dest++ = *src++)//这个表达式的结果就是"b","h","i","\0"
//	{
//		;
//	}
//	//返回目的地的起始位置
//	return ret;
//}
//int main()
//{
//	char arr1[] = "vgbyuhgb";
//	char arr2[] = "bhi";
//
//	char* arr1 = "vbyunj";//这是一个错误示范，arr1是常量字符串不可修改
//
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat ---- 追加字符串

//int main()
//{
//	char arr1[30] = "fvty";//目的地的空间必须足够大  --- 目的地末尾也必须要有"\0"
//	char arr2[] = "fvtyfv";//源头必须要有"\0"
//	strcat(arr1, arr2);  // 目的地 arr1   ---    起始位置   arr2
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//找到目的地字符串的末尾"\0"
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "vbyu";
//	char arr2 = "vtyuvgtuy";
//
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}




















































































