#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//1、上机验证下列表达式的值。
//(	1)3 * 5, 6 - 2 *（4 + 3）,7 % 2    (2)	int a = 4, b = 5, c, d; c = a++;d = --b;验证c和d的值。

//int main()
//{
//	printf("%d\n",3*5);
//	printf("%d\n", 6 - 2 * (4 + 3));
//	printf("%d\n", 7 % 2);
//	int a = 4;
//	int b = 5;
//	int c, d;
//	c = a++;
//	d = --b;
//	printf("%d %d", c, d);
//	return 0;
//}

//2.验证下列程序的输出结果。P53 3.3
//int main()
//{
//	int a, b, c;
//	int s, w, t;
//	s = w = t = 0;
//	a = -1;
//	b = 3;
//	c = 3;
//	if (c > 0)
//		s = a + b;
//	if (a <= 0)
//	{
//		if (b > 0)
//			if (c <= 0)
//				w = a - b;
//	}
//	else
//		if (c > 0)
//			w = a - b;
//		else
//			t = c;
//	printf("%d %d %d", s, w, t);
//	return 0;
//}

//3.输入一个整数，判断该整数的奇偶性。
//int main()
//{
//	int a = 0;
//	printf(" 输入一个数:\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("是偶数");
//	}
//	else
//		printf("是奇数");
//	return 0;
//}


//输入一个1900 - 2200之间的年份，判断这一年是不是闰年,是闰年输出yes,不是则输出no闰年判断条件：
//（1）能整除4且不能整除100（2）、能整除400
//int main()
//{
//	int x = 0;
//	printf("请输入1900-2200之间的年份:");
//	scanf("%d", &x);
//	if (x >= 1900 && x <= 2000)
//	{
//		if (x % 4 == 0 && x % 100 != 0 | x % 400 == 0)
//		{
//			printf("yes");
//		}
//		else
//			printf("no");
//	}
//	else
//	{
//		printf("请输入范围内的年份");
//	}
//	return;
//}

//5、根据下列函数关系，对每个输入的x值，求y值。请编制此程序。
//y = x(x + 2)    2 < x	≤	10	
//y = 2x	   - 1 < x	≤	2
//y = x - 1	     x	≤	- 1
#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("请输入x(x<=10)的值:");
//	scanf("%d", &x);
//	if (2 < x <= 10)
//	{
//		printf("%d", x * (x + 2));
//	}
//	else if (-1 < x <= 2)
//	{
//		printf("%d", 2 * x);
//	}
//	else
//		printf("%d", x - 1);
//	return 0;
//}


//6、编程实现输入一个整数，输出相应的五分制成绩。设90分以上是A，80分至89分是B，70分至79分是C，60分至69分是D，60分以下是E。
//int main()
//{
//	int x = 0;
//	printf("请输入成绩:");
//	scanf("%d", &x);
//	if (x >= 90)
//	{
//		printf("A");
//	}
//	else if (x >= 80)
//	{
//		printf("B");
//	}
//	else if (x >= 70)
//	{
//		printf("C");
//	}
//	else if (x >= 60)
//	{
//		printf("D");
//	}
//	else
//	{
//		printf("E");
//	}
//	return 0;
//}















