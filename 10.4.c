#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//1���ϻ���֤���б��ʽ��ֵ��
//(	1)3 * 5, 6 - 2 *��4 + 3��,7 % 2    (2)	int a = 4, b = 5, c, d; c = a++;d = --b;��֤c��d��ֵ��

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

//2.��֤���г������������P53 3.3
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

//3.����һ���������жϸ���������ż�ԡ�
//int main()
//{
//	int a = 0;
//	printf(" ����һ����:\n");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("��ż��");
//	}
//	else
//		printf("������");
//	return 0;
//}


//����һ��1900 - 2200֮�����ݣ��ж���һ���ǲ�������,���������yes,���������no�����ж�������
//��1��������4�Ҳ�������100��2����������400
//int main()
//{
//	int x = 0;
//	printf("������1900-2200֮������:");
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
//		printf("�����뷶Χ�ڵ����");
//	}
//	return;
//}

//5���������к�����ϵ����ÿ�������xֵ����yֵ������ƴ˳���
//y = x(x + 2)    2 < x	��	10	
//y = 2x	   - 1 < x	��	2
//y = x - 1	     x	��	- 1
#include<stdio.h>
//int main()
//{
//	int x = 0;
//	printf("������x(x<=10)��ֵ:");
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


//6�����ʵ������һ�������������Ӧ������Ƴɼ�����90��������A��80����89����B��70����79����C��60����69����D��60��������E��
//int main()
//{
//	int x = 0;
//	printf("������ɼ�:");
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















