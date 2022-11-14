#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcmp --- 字符串比较

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwr";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	//比较的是字符串的首元素的ASSIC值  -- 第一个字母大小一样比较第二个
//	//if  p1>p2   --返回一个大于0的数字
//	//if  p1=p2    --返回一个等于0的数字
//	//if  p1<p2   --返回一个小于0的数字
//
//	return 0;
//}

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;//小于
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//
//	return 0;
//}



//strncpy 

//模拟实现strncpy

//char* my_strncpy(char* dest, char* src, int count)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	//把需要拷贝的目标字符串个数拷贝到目的地
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//
//	if (count)
//	{
//		while(--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//
////	strncpy(arr1, arr2, 5);//把"abc"后不够的地方的字符全部转换成了"\0"  ，  
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat

//char* my_strncat(char* dest, char* src, int n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//将指针指向dest的末尾
//	while (*dest)
//	{
//		dest++;
//	}
//	//进行追加
//	while (*dest++ = *src++)
//	{
//		n--;
//		// 当n=0时，不在进行追加在追加的末尾补"\0"
//		if (n == 0)
//		{
//			*dest = '\0';
//			return ret;
//		}
//	}
//	//当src全部追加到dest的末尾时，刚好结束循环---把src末尾的"\0"追加到dest的末尾
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 3);
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//   strncmp  -- 字符串比较

//int my_strncmp(const char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	while (*dest++ == *src++)
//	{
//		if (count == 0)
//		{
//			return 0;
//		}
//		count--;
//	}
//	if (*dest < *src)
//	{
//		return (*dest - *src);
//	}
//	else
//		return ( * dest - *src);
//
//}
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret=strcmp(p1, p2);
//	//printf("%d\n", ret);
//	//d<q    p1<p2   返回一个小于0的数字
//
//	//int ret = strncmp(p1, p2, 3);
//	//printf("%d\n", ret);
//	//前面三个字符  p1=p2   返回0
//
//	int ret = my_strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//   strstr   查找子字符串是否存在

//   NULL --空指针
//   NUL  /Null ----"\0"

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 =='\0')//当需要找的字串比  目的地的字符串长时，提前结束
//		{
//			return cur;  //找到了
//		}
//		if (!*s1)//----    !*s1  = (*s1=='\0')    
//		//原本*s1等于0是假 --不过前面加上！将假转换成了真
//		//当*s1不等于0时是真 --- 前面加上! 将真转换成了假
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//没有找到
//}
//
//int main()
//{
//	char* p1 = "abcdefjki";
//	char* p2 = "def";
//	char*ret=strstr(p1, p2);
//	int ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字符串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}





























































