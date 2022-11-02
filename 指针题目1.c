#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
	//char arr[]={'a','b'};
	//char arr[] = "atygbnu";

	//my_strlen(const char* str);

//	printf("1==%d\n", strlen(arr));
//	printf("2==%d\n", strlen(arr+0));
////	printf("3==%d\n", strlen(*arr));//*arr是’a‘ 是97 相当于97当成内存地址是err的
////	printf("4==%d\n", strlen(arr[1]));//一样的错误
//
//		                                                   //my_strlen(const char* str);
//	printf("5==%d\n", strlen(&arr));//&arr-取的是数组的地址--数组指针    char（*p）[7]=&arr   有警告 类型不符
//
//
//	printf("6==%d\n", strlen(&arr + 1));//随机值    一样的是有警告
//
//
//	printf("7==%d\n", strlen(&arr[0] + 1));



	//printf("1==%d\n", sizeof(arr));//sizeof(arr)计算的是数组的大小--单位是字节
	//printf("2==%d\n", sizeof(arr+0));//计算的是地址的大小--arr+0首元素地址的大小
	//printf("3==%d\n", sizeof(*arr));
	//printf("4==%d\n", sizeof(arr[1]));
	//printf("5==%d\n", sizeof(&arr));
	//printf("6==%d\n", sizeof(&arr+1));
	//printf("7==%d\n", sizeof(&arr[0] + 1));//&arr[0]+1是第二个元素地址

//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("1==%d\n", strlen(p));
//	printf("2==%d\n", strlen(p + 1));
//	//printf("3==%d\n", strlen(*p));//非法访问
//	//printf("4==%d\n", strlen(p[0]));
//
//
//	printf("5==%d\n", strlen(&p));//随机值
//
//
//
//	printf("6==%d\n", strlen(&p+1));//随机值
//	printf("7==%d\n", strlen(&p[0] + 1));



	//printf("1==%d\n", sizeof(p));//计算指针变量p的大小

	//printf("2==%d\n", sizeof(p + 1));//p+1得到的是字符b的地址

	//printf("3==%d\n", sizeof(*p));

	////arr[0]==*(arr+0)==*(p+0)==p(0)
	//printf("4==%d\n", sizeof(p[0]));

	//printf("5==%d\n", sizeof(&p));
	//printf("6==%d\n", sizeof(&p+1));
	//printf("7==%d\n", sizeof(&p[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", &a[0][1]);
//
//	printf("1==%d\n", sizeof(a));
//	printf("2==%d\n", sizeof(a[0][0]));
//
//	printf("3==%d\n", sizeof(a[0]));//a[0]相当于第一行作为一维数组的数组名
//	//sizeof(arr[0])把数组名单独放在sizeof（）内，计算的是第一行的大小
//
//	printf("4==%d\n", sizeof(a[0] + 1));//第一行第二个元素的地址
//	printf("5==%d\n", sizeof(*(a[0] + 1)));
//
//	printf("6==%d\n", sizeof(&a[0] + 1));//第二行地址
//	printf("7==%d\n", sizeof(*(&a[0] + 1)));
//
//	printf("8==%d\n", sizeof(a + 1));//a是二维数组的数组名，没有sizeof（数组名），也没有&（数组名），所以a是首元素地址
//	//而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
//	
//	printf("9==%d\n", sizeof(*(a + 1)));
//	printf("10==%d\n", sizeof(*a));
//
//	printf("11==%d\n", sizeof(a[3]));//16
//
//
//	return 0;
//}















































