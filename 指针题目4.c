#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//要求输出结构体a的数据，不能输出的是
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	//a是创建了一个结构体变量
//	//*p 是一个结构体指针 指向的是成员名a
//
//	a.a = 99;
//	//第一个a是结构体变量
//	//第二个a是结构体成员名
//
//	printf("%d\n", );
//	return 0;
//}
//A--a.a

//B--*P.a
//这个是不可以的---因为 . 的优先级是高于*的

//C--p->a

//D--(*p).a



//struct s
//{
//
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct s *p)//用结构体指针进行接收
//{
//	printf("%s\n", (*p).name);//打印出来的就是chen
//	return 0;
//}
//
//int main()
//{
//	struct s students[3] = { {555,"zheng",20},
//	                        {666,"chen",23},
//		                    {777,"wang",56} };
//
//	fun(students + 1);
//	传过去的结构体的首元素地址---也就是{555，"zheng"，20}这个首元素的地址
//	+1也就是指向了下一个元素的地址
//
//
//	return 0;
//
//}


//喝汽水问题---- 一瓶汽水1块钱  2个空瓶子可以换一瓶汽水   问共有20元，可以喝多少瓶汽水

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);

	//if (money == 0)
	//{
	//	total = 0;
	//}
	//else
	//{
	//	total = 2 * money - 1;
	//}


	//买回来的汽水喝掉
	//total = money;
	//empty = money;
	////换回来的汽水
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
//	printf("%d ", total);
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	//system("pause");
//	return 0;
//}

//内存空间中栈区的默认使用：
//先使用高地址处的空间     后使用低地址处的空间
//数组随着下标的增长  地址是由低到高变化的

    //        上面           下面
//内存 -------高地址--------》低地址


//导致死循环的原因
//main函数创建了两个局部变量，这两个局部变量都是存放在栈区的，而栈空间的使用习惯先使用高地址处的空间     后使用低地址处的空间
//故i一定在arr上面创建 ， 而数组随着下标的增长  地址是由低到高变化的，所以数组越界访问是有可能改变i值的情况的



//实现一个函数实现一个数组的前半部分是奇数，后半部分是偶数

//从左边找偶数
//右边找奇数
//把它们交换

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//从左边找偶数
//	while (left < right)
//	{
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//右边找奇数
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	printf("gyuih");
//	return 0;
//}




























