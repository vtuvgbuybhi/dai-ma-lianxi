#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 1 2 3 4 5
//	// 6 7 8 9 10
//
//	int* ptr1 = (int*)(&aa + 1);
//
//	int* ptr2 = (int*)(*(aa + 1));
//	//*(aa+1)  =  aa[1] --拿到第二行首元素地址
//
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "hyu";//将字符串的首元素放在p里面
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//这是一个数组，数组的每一个元素是指针  ---指针指向的是常量字符串的首元素地址
//	//   a[]
//	// char* ----->"work"  的首元素地址‘w’
//	// char* ----->"at"    的首元素地址‘a’
//	//char* ------》"alibbab"  的首元素地址  ‘a’
//
//
//	char** pa = a;
//	//a是一个指针-----（pa）是一个指针---char*  说明pa指向的类型是一个字符指针（char*）
//
//	pa++;
//	//pa++是加了一个char*---  指向了"at"的字符串
//
//	//int*p；
//	//p++ 是加了一个int整形
//
//	printf("%s\n", *pa);//以%s打印是打印  以起始位置开始的字符串到‘\n’；
//
//	return 0;
//}

//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//	//  c[]        一级指针
//	//  char* ----->"ENTER"   0
//	//  char* ----->"NEW"     1
//	//  char* ----->"POINT"   2
//	//  char* ----->"FIRST"   3
//
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//   CP[]        二级指针
//	//   char**  ------> [char* ----->"FIRST" ]  0
//	//   char** -------> [char* ----->"POINT"]   1 
//	//   char** ------->  [char* ----->"NEW"]    2
//	//   char** ------->  [char* ----->"ENTER"]  3
//
//	char*** cpp = cp;
//	//三级指针
//	//char*** ---->   [char*  ------> [char* ----->"FIRST" ] ]
//
//	printf("%s\n",**++cpp);
//	//cpp指向的是（c+3）的内存地址
//	//++cpp指向的是  （c+2）的内存地址
//	//*（++cpp）取到的是（c+2）这个内容
//	//**（++cpp）取到的是 指向"POINT"的这个指针
//
//
//	printf("%s\n", *-- * ++cpp + 3);
//	//++cpp指向的是（c+1）的内存地址
//	//*（++cpp）取到的就是（c+1）这个内容
//	//*--*++cpp  就是（c+1-1）再进行解引用 取到的就是指向"ENTER"的指针
//	//*-- * ++cpp + 3  就是指针重指向"E"这个元素向后移动到"T"与"E"之间的位置
//
//	printf("%s\n", *cpp[-2] + 3);
//	//*cpp[-2] = **(cpp+(-2))
//	//cpp+(-2)指向的就是（c+3）的内存地址
//	//*（cpp+(-2)）取到（c+3）这个的内容
//	//**（cpp+(-2)）取到的就是指向"FIRST"的指针
//	//**(cpp+(-2))+3   指向的就是"R"与"S"之间的位置
//
//
//	printf("%s\n", cpp[-1][-1] + 1);
//	//cpp[-1] = *(cpp-11)[-1]  = *(*(cpp-1)-1)
//	//cpp-1指向的就是（c+2）的内存地址
//	//*(cpp-1) 取到的就是（c+2）
//	// *（cpp-1）-1  得到的就是（c+2-1）就是（c+1）
//	//*（c+1）取到的就是存放"NEW"的指针   ---这个指针指向的就是"N"的地址
//	//*(*(cpp-1)-1)+1   指向的就是"N"与"E"之间
//
//	return 0;
//}



//作业讲解

//int main()
//{
//	unsigned long p[] = { 6,7,8,9,10 };
//	unsigned long* p1;
//
//	p1 = p;
//	*(p1 + 3) += 3;
//	printf("%d,%d\n", *p1, *(p1 + 3));
//
//	return 0;
//}

//写一个函数可以逆序字符串内容
#include<string.h>
#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len-1);
//	while (right-left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[256] = {0};
//	printf("请输入需要逆序的字符串:>");
////	scanf("%s", &arr);//识别到空格就停止
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//计算求和
//求Sn=a+aa+aaa+aaaa+aaaaa的前五项之和，其中a是一个数字
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//打印水仙花数
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//判断i是否为水仙花数（字幂数）
//		//1.计算i的位数
//		//2.计算i的每一位的n次方之和
//		//3.比较i==sum
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}































































































































