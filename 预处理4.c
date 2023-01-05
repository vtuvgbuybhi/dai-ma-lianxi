#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};

//内存是一个一个小的格子组成的
//
//c1占一个字节      ---》  放0的位置处    偏移量就是0
//
//a占4个字节  自身大小是4 默认对齐数（这个是由编译器决定的）8      取较小值4      放在4的倍数处    偏移量就是4
//
//c2占一个字节     存放在1的倍数处       就放在8位置处     偏移量就是8
//
//结构体总大小就是取结构体成员中最大对齐数的整数倍   为4    但结构体存放成员占用了9个字节（0-8）  取4的倍数为12
//
//------------------
//|                |
//------------------
//|                |   0      放c  <---------存放结构体的起始位置    起始偏移量
//------------------
//|                |   1
//------------------
//|                |   2
//------------------
//|                |   3
//------------------
//|                |   4      a存放的起始位置
//------------------
//|                |   5      
//------------------
//|                |   6      
//------------------
//|                |   7       a存放到这里结束
//------------------
//|                |   8      c2
//------------------
//|                |   9
//------------------
//|                |   10
//------------------
//|                |   11      占用内存到这里    （9-11）的空间浪费了
//------------------
//|                |   12
//------------------
//|                |
//------------------
//|                |
//------------------
//|                |
//------------------
//|                |
//------------------


//offsetof   -->  计算结构体成员的偏移量

//#include<stddef.h>
//
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}



//实现offsetof


//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//
//	//(int)&(((struct S*)0)->c1)
//
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


//位段式结构体大小

//struct S
//{
//	char a : 4;
//	//char的大小是1个字节   其中的4个bit位给a用掉了
//	//剩下4个bit位
//
//	char b : 2;
//	//4个bit给b用掉2个，还剩下2个bit位
//	char state;
//	//没有设置位数 -->直接用1个char
//	//剩下的2个bit位不够了，直接再开辟一个字节
//	//state直接全部用掉了
//
//	char c : 1;
//	//c要用1个bit位  --> 只能再开辟一个字节了 占用一个bit位，剩下的7个bit位浪费了
//
//	//所以总大小为3个字节
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	return 0;
//}


#include<string.h>

//分析

//int main()
//{
//	unsigned char puc[4];
//	char类型的数组,可以存放4个char类型的数据   --》总大小为4个字节
//
//	struct S
//	{
//		unsigned char a;
//		没有设置位数，占1个字节，a全部占完了
//		puc[0]全部给了a
//
//		unsigned char data0 : 1;
//		puc[0]已经被a全部占用了  --》data0只能占用puc[1]中的一个bit位了
//		先使用puc[1]中的低位
//
//		unsigned char data1 : 2;
//		unsigned char data2 : 3;
//	}*s;
//	s位段式结构体的指针
//
//	s = (struct S*)puc;
//	puc是数组名--》首元素地址 强制转换成（struct S*）指针     
//	将s位段式结构体指针赋值成puc
//	s指向的就是puc数组的首元素
//
//	memset(puc, 0, 4);
//	memset将puc这个数组4个字节设置成0
//
//
//            --------------------------------------------
//     s----> |00000000 | 00000000 | 00000000 | 00000000 |
//            --------------------------------------------
//              puc[0]     puc[1]     puc[2]     puc[3]
//
//		    ----------------------------------------------------------------
//    s----> |00000000|    00     000      00        0     |00000000|00000000|
//		   -----------------------------------------------------------------
//		   |-- a -- |         |data3|  |data2|   |data0|
//
//
//	s->a = 2;
//	a中放一个2    00000000  --》 00000010
//
//	s->data0 = 3;  
//	011 但data0只能存放1个bit  所以  0---》1
//
//	s->data1 = 4;
//	0100  但data1只能存放2个bit   所以00---》00
//
//	s->data2 = 5;
//	0101  data只能存放3个bit位  所以000--》101
//
//
//    最后puc数组的内存
//   ----------------------------------------
//  |0000 0010 |0010 1001|0000 0000|0000 0000|
//   ----------------------------------------
//
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	读出来  %x是按16进制打印   02是打印2位
//      02        29          00        00
//
//	return 0;
//}


//验证当前机器内存的字节序

//int main()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return  0;
//}


//联合体的大小计算

//union Un
////联合体的大小最小也最大成员的大小   --》不过不一定  还有一个对齐数
////共用同一块空间，选最大的成员大小，不过还有一个最大对齐数
//{
//	short s[7];// 14   成员类型大小2   对齐数2
//	int a;//4          成员类型大小4   对齐数4
//
//	//最大对齐数 4    联合体的大小应该是4的倍数     14不是4的倍数  浪费2个字节  16
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
////	最大成员大小2个字节    最大对齐数是2  --》故联合体大小是2个字节
////	s是联合体指针
////	a是指向联合体的变量
////
////     说k指的是2个字节指向的空间
////	说i指的是2个元素i[0]跟i[1]
////
////		          a
////		------------------------
////s--》   |          |           |
////		------------------------
////		  i[0]          i[1]
//
//	s = &a;
//	s->i[0] = 0x39;  
//	s->i[1] = 0x38;
//
//	//放十六进制的  39  与  38
//
//	//小端存储   -->低位放低地址    高位放高地址
//
// //  《------低地址             高地址---------》
//	//         -----------------------
//	//         |   39     |   38     |        
//	//         -----------------------
//
//
//	printf("%x\n", a.k);
//	//取k的数据时，拿的就是i里的数据
//	//打印出来是与内存存储相反的    0x 38  39
//	//0x38 39
//	//其中39是数据的低位    38是数据的高位
//
//	return 0;
//}


//代码的问题

//#include<stdlib.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	//没有将p指向的内存空间，进行内存释放
//	//内存泄露
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	//将str的值传递给p指针
//	//p其实是str的一份临时拷贝   并没有将str的地址传给p
//	//p=NULL
//	//malloc开辟100个字节的空间返回的地址赋给p   -->GetMemory结束
//	//出了GetMemory   p销毁（p是GetMemory的形参变量）
//
//	strcpy(str, "hello world");
//	//str还是NULL    将"hello world"到一个空指针指向的内存空间（程序崩溃）
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//strncpy的实现
#include<assert.h>

//char* my_strncpy(char* dest, const char* src,const int n)
//{
//	assert(dest && src);//断言
//	int count = n;
//	char* a = dest;
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (count--)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return a;
//}
//int main()
//{
//	char arr1[] = "bhybuybuy";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	char arr1[] = "vgyvuyt";
//	char arr2[] = "hhh";
//	strncpy(arr1, arr2, 5);
//
//	return 0;
//}



//strcpy的实现
//#include<string.h>
//
//int main()
//{
//	char str1[30]="byhugbuyihiui";
//	char str2[6] = "gyutg";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return p1;
//}
//int main()
//{
//	char arr1[30] = "gyugyhguyig";
//	char arr2[6] = "hello";
//	my_strcpy(arr1, arr2);
//
//	return 0;
//}

//#include<string.h>

//int main()
//{
//	char arr1[12] = "gbygy";
//	char arr2[6] = "hellh";
//
//	strncat(arr1, arr2, 6);
//	return 0;
//}

//#include<assert.h>
//char* my_strncat(char* p1, const char* p2, int n)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	while (n && (*p1++ = *p2++))
//	{
//		n--;
//	}
//	*p1 = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[12] = "gvyghuyh";
//	char arr2[8] = "vgygvyu";
//	my_strncat(arr1, arr2, 4);
//	return 0;
//}










































































