#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char ch = 'w';
//	char* p = &ch;//字符指针
//	char* p2 = "gvyugh";//把p2指向了g
//
//	return 0;
//}

//int main()
//{
//	//指针数组---数组--存放指针的数组
//	int* arr[5];
//	char* ch[5];
//	//数组指针
//	int* p3;//整形指针--指向整形的指针
//	char* p4;//
//
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//数组指针--指向数组的指针   pa就是一个数组指针
//
//	return 0;
//}

//数组传参
//void test(int arr[5][3])
//{}

//void test(int arr[][3])//行可以省略
//{}

//void test(int arr[][])//err  不可以两个都省略
//{}

//void test(int(*p)[5])
//{}
//
//
//int main()
//{
//	int arr[5][3] = { 0 };
//	test(arr);
//	return 0;
//}

//void test(int* p)
//{
//
//}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{2,3,4,5},{3,4,5,6} };
//	int(*pa)[4] = &arr;
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j=0; j < 4; j++)
//		{
//			//printf("%d ", *(* (pa + i) + j));
//			//printf("%d ",  ( * (pa + i))[j]);
//			//printf("%d ", *(pa[i] + j));
//			//printf("%d ", pa[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* pa = arr;
//	for (int i = 0; i < 5; i++)
//	{
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(arr + i));
//		printf("%d ", *(pa + i));
//		//printf("%d ", pa[i]);//   arr[i]==*(arr+i)==*(pa+i)==pa[i]
//	}
//	//return 0;
//}



//二级指针传参--可以有那些类型
//void test(int** p)
//{
//
//}
//
//
//int main()
//{
//	int* arr[]={0};
//	int* ptr;
//	int** pa = &ptr;
//	test(&ptr);
//	test(pa);
//	test(arr);
//	return 0;
//}



//函数指针---指向函数的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	//printf("%d \n", Add(a, b));
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);//&函数名 和 函数名 都是函数的地址
//	int(*pa)(int, int) = Add;
//	printf("%d ", (*pa)(a, b));
//
//	return 0;
//}

//void Print(char* pa)
//{
//	printf("%s\n", pa);
//}
//int main()
//{
//	char arr[] = "vytu";
//	void(*p)(char*) = Print;
//	(*p)(arr);
//	return 0;
//}

//两段有趣的代码

//char* my_strcpy(char*dest,const char*str)
//{}
////1.写一个函数指针 pf ，能够指向my_strcpy
////2.写一个函数指针数组 pfArr ，能够存放4个my_strcpy函数的地址
//int main()
//{
//	//1.char*(*pf)(char*, const char*);
//
//	//2.char*(*pfArr[4])(char*,const char*);
//
//	return 0;
//}











