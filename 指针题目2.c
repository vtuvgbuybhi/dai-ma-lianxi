#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
#include<stdio.h>
#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3
#include<math.h>
//void Matrix_addition(int arr1[][COL1], int arr2[][COL2],int arr3[][COL2], int row1, int col1, int row2, int col2)
//{
//	if (row1 == row2 && col1 == col2)
//	{
//		for (int i = 0; i < row1; i++)
//		{
//			for (int j = 0; j < col1; j++)
//			{
//				arr3[i][j] = arr1[i][j] + arr2[i][j];
//			}
//		}
//	}
//	else
//		printf("�����С��ͬ");
//}
//
//int main()
//{
//	int arr1[ROW1][COL1] = { 0 };
//	int arr2[ROW2][COL2] = { 1,2,3,4,5,6,7,8,9 };
//	int arr3[ROW2][COL2] = { 0 };
//	Matrix_addition(arr1, arr2, arr3, ROW1, COL1, ROW2, COL2);
//	return 0;
//}


//int main()
//{
	//int e = 1;
	//int f = 4;
	//int g = 2;
	//float m = 10.5;
	//float n = 4.0;
	//float k;
	//k = (e + f) / g + sqrt((double)n) * 1.2 / g + m;
	//printf("%f", k);
	//float x = 2.5;
	//float y = 4.7;
	//int a = 7;
	//float b = x + a % 3 * (int)(x + y) % 2 / 4;
	//printf("%f", b);
	//int x = 1;
	//int y = 1;
	//int z = 1;
	//x = x || y && z;
	//printf("%d", x && !y || z);
//
//	return 0;
//}



//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//
//	      //(&a+1)����һ��������----  ��a+1��ָ��ڶ���Ԫ��
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


/*
struct Test
{
	int NUM;
	char* pcName;
	char cha[2];
	short sBa[4];
}*p*/;

//����p��ֵλ0x100000�����±��ʽ��ֵ�ֱ�Ϊ����
//��֪���ṹ��Test�����͵ı�����С��20���ֽ�


//int main()
//{
//
//	int arr[3][4] = { 0 };
//	int* p = &arr[0][0];
//	printf("%p\n", &arr[0][0]);
//	printf("%p\n", &arr[0][1]);
//	printf("%p\n", p+1);
//
//	p = (struct Test*)0x100000;
//
//	//(p+1)����һ���ṹ�����20---0x00100014
//	printf("%d\n", p + 0x1);
//
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//	return 0;
//
//}

//int main()
//{
//	int a = 20;
//	//00000000 00000000 00000000 00010100
//	//0x 00 00 00 14  --  4���ֽ�
//
//	char* pa = (char*)&a;
//	if (*(pa) == 20)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//int main()
//{
//	int a[4] = {1,2,3,4};
//	// [01 00 00 00 | 02 00 00 00| 03 00 00 00| 04 00 00 00]
//	//�͵�ַ                                           �ߵ�ַ
//
//
//	int* ptr1 =(int*)(&a + 1);
//
//	int* ptr2 = (int*)((int)a + 1);
//	//����a��ָ��ĵ�ַ��0x 00 00 00 05--ת�������ξ���5  ��Ȼ��5+1=6
//	//��6ת����16���Ƶľ��� 0x 00 00 00 06  ��ת��������ָ��
//	//��ô��������ָ���һ�������1���ֽ�-----
//
//	//����ptr2ָ��01���濪ʼ��4���ֽ�
//	//ptr2---- 00 00 00 02
//	
//
//	printf("%x  ,  %x", ptr1[-1], *ptr2);
//	//ptr1[-1] = *(ptr1+(-1)) =*(ptr1-1)
//
//	return 0;
//}


//int main()
//{
//
//	//���ű��ʽ     1      3     5
//	int a[3][2] = { (0,1),(2.3),(4,5) };
//	//��������� 1 3
//	//           5 0
//	//           0 0
//
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}


//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//
//	p = a;//��������ʾ��Ԫ�ص�ַָ��һ��5��Ԫ�ص�����---  int��*p��[5]
//
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}




//int main()
//{
//	int sum = 0;
//	int x = 0;
//	printf("������Ҫ��Ľ׳�:");
//	scanf("%d", &x);
//	for (int i = 1; i <= x; i++)
//	{
//		int ret = 1;
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d  ", i, j, i * j);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//int main()
//{
//	int a[10] = { 10,91,3,54,65,75,1,23,67,34 };
//	int j = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		if (a[j] >= a[i])
//		{
//			j = i;
//		}
//	}
//	printf("%d\n", a[j]);
//	printf("%d\n", j);
//	return 0;
//}










































