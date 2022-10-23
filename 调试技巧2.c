#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hello\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//1.栈区的默认使用：
//先使用高地址出空间
//再使用底地址处空间

//2.数组随着下标的增长--地址是由底到高变化的


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dest,const char* src)//保护源头数据不被修改
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest,const char* src)//保护源头数据不被修改
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言
// 
////把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
// 
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const num = 10;
//	const int* p = &num;
//	*p = 20;//err const 放在指针变量的*左边时，修饰的是*p 也就是说，不能通过p来改变*p值
//	int* const p = &num;
//	//const 放在指针变量的*右边时，修饰的是指针变量本身 也就是说，p不能被改变了
//
//
//	printf("%d", num);
//
//	return 0;
//}

//#include<stdlib.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//断言--保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "vbubuy";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}





















