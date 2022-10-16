#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2.统计二进制中1的个数
// 方法1----有问题的只能求正整数--当然也能求负数，需要改进
//int count_bit_one(int n)-----将int n 改成unsigned int n---将n变成无符号数
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	printf("输入一个数;\n");
//	scanf("%d", &i);
//	//写一个函数求i的二进制(补码)表示中有几个1
//	int count=count_bit_one(i);
//	printf("%d", count);
//	return 0;
//}

//方法2
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)//按位与上一个1
//		{
//			count++;
//		}
//
//	}
//	return count;
//}
//int main()
//{
//	int n = -135;
//	int count = count_bit_one(n);
//	printf("%d", count);
//	return 0;
//}

//方法3--最优--又几个1就循环几次
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		num = num & (num - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

////2.求两个数之间不同二进制位的个数
//int get_fiff_bit(int m, int n)
//{
//	int count = 0;
//	int temp = m ^ n;
//	while (temp)
//	{
//		temp = temp & (temp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int count = get_fiff_bit(m, n);
//	printf("%d", count);
//
//	return 0;
//}

//3.求一个数二进制中奇数位与偶数位上是数是多少
//void Print(int n)
//{
//	int i = 0;
//	printf("奇数位上的数为:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//3.交换两个变量的值，不引入第三个变量
// 方法1
//int main()
//{
//	int a = 6;
//	int b = 8;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}

//方法2
//int main()
//{
//	int a = 6;
//	int b = 8;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}

//用指针打印数组内容
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int* pa = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//打印9*9乘法表
//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//模拟实现strlen
//用计数器的方法实现
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bubuyghbyu";
//	int k = my_strlen(arr);
//	printf("strlen=%d", k);
//	return 0;
//}

//用指针-指针的方法实现--得到的就是中间元素的个数
//int my_strlen(char* str)
//{
//	char* star = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - star;
//
//}
//int main()
//{
//	char arr[] = "byughyuh";
//	int k = my_strlen(arr);
//	printf("strlen=%d", k);
//	return 0;
//}

//用函数递归的方法
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else return 0;
//}
//
//int main()
//{
//	char arr[] = "vbyugbuy";
//	int k = my_strlen(arr);
//	printf("srrlen=%d", k);
//	return 0;
//}
#include<string.h>
//字符串逆序(递归实现)
//void reverse_string(char arr[])
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	char arr  [] = "ftygtgh";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}
//void reverse_string(char arr[])
//{
//	char temp = arr[0];
//	int len = strlen(arr);
//	arr[0]=arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//
//	arr[len - 1] = temp;
//}
//int main()
//{
//	char arr[] = "vtuvgbuyb";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}































