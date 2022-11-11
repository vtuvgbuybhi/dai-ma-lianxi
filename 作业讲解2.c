#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[30] = "fcy";
//	char arr2[] = "fty";
//	strcat(arr1, arr2);//在arr1后追加一个字符串arr2
// 
//	printf("%s\n", arr1);
//
//	return 0;
//}

//int is_left_move(char* str1, char*str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//
//	//1.在str1字符串中追加一个str1字符串
//	//使用库函数 ---strcat-----不能追加相同的字符串
//	//           ---strncat
//	strncat(str1, str1, 6);
//	//abcdefabcdef
//
//	 //2.判断str2指向的字符串是否在str1指向的字符串的子串
//	//strstr --- 找子串的一个库函数
//	//找到了子串 ---把找到字串的首元素地址返回来
//	//没有找到子串 --返回空指针NULL
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "bcdefa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//	return 0;
//}

//杨氏矩阵
//有一个数字矩阵，矩阵的每一行从左到右是递增的，矩阵从上到下是递增的，编写程序在这样的矩阵中查找某个数字是否存在

//int FindNum(int arr[3][3], int k, int row, int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x <= row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	//没有找到
//	return 0;
//}

//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 5;
//	int ret = FindNum(arr, k, 3, 3);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}

//我们只要想要拿到找到元素的下标就拿，不想拿就不打印，在不改变FindNum整个函数内部的情况下，另一种设计方式

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//没有找到
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 5;
//	int x = 3;
//	int y = 3;
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d,%d\n", x, y);
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}


















