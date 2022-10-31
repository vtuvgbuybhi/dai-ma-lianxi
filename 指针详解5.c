#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int(*pa)[10] = &arr;
//	//函数指针
//	int(*padd)(int, int) = Add;
//	//(*padd)(1,2)---调用这个函数
//	//padd（1，2）---调用这个函数
//	//*在调用这个函数时，可不起实际作用
//
//
//	//函数指针数组
//	int(*pa[5])(int, int) = {0};//存放5给函数地址的数组
//
//	//指针函数指针数组的指针
//	int(*(*ppfarr[5]))(int, int) = &pa;
//
//	return 0;
//}

//回调函数

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	//char* pc = &a;
//	//char ch = 'w';
//
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针  不能进行解引用操作
//	//void* 类型的指针  不能进行加减整数的操作
//
//
//
//	return 0;
//}

#include<stdlib.h>



//Bubblesort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
////qsort --库函数--排序
////quick sort--快速排序
//
////void qsort(void* base,----------//待排序数组首元素的地址
////	       size_t num, ----------//待排序首元素数组的个数
////	       size_t width, ----------//待排序数组每个元素的大小---单位是字节
////	       int(*cmp)(const void* e1, const void* e2)------函数指针---比较两个元素所调用的函数地址--这个函数使用者自己实现
////           );
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的函数
//	return  *(int*)e1 - *(int*)e2;
//
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(* (float*)e1 - *(float*)e2));
//}
//
//int cmp_stu_age(const void*e1,const void*e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//
//}
//
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	//比较两个名字--就是比较字符串--不能直接用大于小于等于直接比较
//	//应该用strcmp函数实现
//	return strcmp(((struct stu*)e1)->name - ((struct stu*)e2)->name);
//
//}
//
//void test1()
//{
//	int arr[10] = { 2,3,4,1,6,5,8,7,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//调用qsort 排序一个整形数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test2()
//{
//	float arr[] = {4.0,2.0,6.0,9.0,7.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);//调用qsort 排序一个浮点型数组
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}

//void test3()
//{
//	struct stu s[3] = { {"gbyiuh",20},{"fg",18},{"fdvtgy",45} };//结构体数组
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
//}
//
//void test4()
//{
//	struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };//结构体数组
//	int sz = sizeof(s) / sizeof(s[0]);
//
//}




//
//int main()
//{
	//test1();
	//printf("\n");
	//test2();
	//printf("\n");
	//test3();
	//test4();




	//冒泡排序函数
	//冒泡排序函数只能排序整形数组

	//qsort---c语言提供的一个库函数---可以排序任意类型的数据

	//int arr[10] = { 2,3,4,1,6,5,8,7,10,9 };

	//struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };//结构体数组
	//float f[] = { 9.0,1.0,5.0,6.4 };


	//int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_int);//调用qsort 排序一个整形数组

	////Bubblesort(arr, sz);


	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

//	return 0;
//}


//qsort --库函数--排序
//quick sort--快速排序





//冒泡排序只能排序整形数组---怎么样才能让冒泡排序也能排序不同类型的数组呢

//Bubblesort(int arr[], int sz)//-------
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}


//void swap(char*buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void Bubblesort(void* base, int sz, int width, int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//两元素比较
//			if (cmp((char*)base + j * width, (char*)base + (1 + j) * width)>0)
//			{
//				//交换
//				swap((char*)base + j * width, (char*)base + (1 + j) * width,width);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的函数
//	return  *(int*)e1 - *(int*)e2;
//}
//void test5()
//{
//	int arr[10] = { 2,5,6,7,4,1,9,8,10,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	Bubblesort(arr,sz,sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
////void test6()
////{
////	struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	Bubblesort(s,sz,sizeof(s[0]),);
////}
//
//
//int main()
//{
//	test5();
//
//	return 0;
//}








































































































