#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1、编写函数，求两个实数的和。编写主函数，输入两个数，调用函数求和，在主函数中显示结果。建议函数名mysum。
//输入 : 两个实数，用逗号隔开。
//输出：一个实数。

//int mysum(int x,int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("输入需要求和的两个整数:\n");
//	scanf("%d,%d", &x, &y);
//	int sum=mysum(x, y);
//	printf("%d", sum);
//	return 0;
//}

//2、编写函数，求实数x的绝对值。在主函数中输入实数x，调用函数求绝对值，在主函数中输出。建议函数名 myfabs。
//输入 : 一个实数
//输出：绝对值

//int myfabs(int a)
//{
//	if (a >= 0)
//	{
//		return a;
//	}
//	else
//	{
//		return a * -1;
//	}
//
//}
//int main()
//{
//	int a = 0;
//	printf("输入需要求整数的绝对值:\n");
//	scanf("%d", &a);
//	int A=myfabs(a);
//	printf("%d", A);
//	return 0;
//}

//3、编写函数，求n!, 0！ = 1。编写主函数，输入n，调用函数求阶乘，在主函数中输出结果。
//输入 : 非负整数
//输出：阶乘
//int skll(int n)
//{
//	int i = 0;
//	int count = 1;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 1; i <= n; i++)
//		{
//			count = count * i;
//		}
//		return count;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	printf("输入非负整数:\n");
//	scanf("%d", &n);
//	int f=skll(n);
//	printf("%d", f);
//	return 0;
//}

//4、用递归方法求n阶勒让德多项式的值，递归公式为
//n = 0     pn(x) = 1
//n = 1     pn(x) = x
//n > 1     pn(x) = ((2n - 1) * x * pn - 1(x)-(n - 1) * pn - 2(x)) / n
//结果保留2位小数。


//float rd(int x, int n)
//{
//	float r;
//	if (n == 0)
//	{
//		return 1;
//	}
//	else if (n == 1)
//	{
//		return x;
//	}
//	else
//	{
//		r = ((2 * n - 1) * x * rd(x, n - 1) - (n - 1) * rd(x, n - 2)) / n;
//	}
//	return r;
//}
//int main()
//{
//	int n, x;
//	float i;
//	printf("输入阶乘:\n");
//	scanf("%d", &n);
//
//	printf("请输入x:\n");
//	scanf("%d", &x);
//
//	i = rd(x, n);
//	printf("%.2f", i);
//
//	return 0;
//}

























