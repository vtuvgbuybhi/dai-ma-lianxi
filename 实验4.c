#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1����д������������ʵ���ĺ͡���д�����������������������ú�����ͣ�������������ʾ��������麯����mysum��
//���� : ����ʵ�����ö��Ÿ�����
//�����һ��ʵ����

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
//	printf("������Ҫ��͵���������:\n");
//	scanf("%d,%d", &x, &y);
//	int sum=mysum(x, y);
//	printf("%d", sum);
//	return 0;
//}

//2����д��������ʵ��x�ľ���ֵ����������������ʵ��x�����ú��������ֵ��������������������麯���� myfabs��
//���� : һ��ʵ��
//���������ֵ

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
//	printf("������Ҫ�������ľ���ֵ:\n");
//	scanf("%d", &a);
//	int A=myfabs(a);
//	printf("%d", A);
//	return 0;
//}

//3����д��������n!, 0�� = 1����д������������n�����ú�����׳ˣ�������������������
//���� : �Ǹ�����
//������׳�
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
//	printf("����Ǹ�����:\n");
//	scanf("%d", &n);
//	int f=skll(n);
//	printf("%d", f);
//	return 0;
//}

//4���õݹ鷽����n�����õ¶���ʽ��ֵ���ݹ鹫ʽΪ
//n = 0     pn(x) = 1
//n = 1     pn(x) = x
//n > 1     pn(x) = ((2n - 1) * x * pn - 1(x)-(n - 1) * pn - 2(x)) / n
//�������2λС����


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
//	printf("����׳�:\n");
//	scanf("%d", &n);
//
//	printf("������x:\n");
//	scanf("%d", &x);
//
//	i = rd(x, n);
//	printf("%.2f", i);
//
//	return 0;
//}

























