#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 8,2,4,3,6,10,5 };
//	int ret = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int n=0;
//	int k = 0;
//	for (i = 0; i < ret-1; i++)
//	{
//		if (arr[n] < arr[i + 1])
//		{
//			n = i + 1;
//		}
//	}
//	for (i = 0; i < ret-1; i++)
//	{
//		if (arr[k] > arr[i + 1])
//		{
//			k = i + 1;
//		}
//	}
//	printf("�������ֵ���±�:%d\n", n);
//	printf("������Сֵ���±�:%d\n", k);
//	return 0;
//}



//int main()
//{
//	int arr[3][3] = { {1,2,3} ,{1,2,3},{1,2,3} };
//	int i, j;
//	int ret = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (i == j)
//			{
//				ret += arr[i][j];
//			}
//		}
//	}
//	printf("����Խ���֮��:%d", ret);
//	return 0;
//}

//int main()
//{
//	char z;//������������
//	int a[3][3], b[3][3], c[3][3];
//	printf("����Ҫѡ�������� * + - \n");
//	printf("���������е�����: ");
//	scanf("%s", &z);
//	printf("\n");
//	printf("�����һ��3*3����: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	printf("����ڶ���3*3��: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	printf("������Ϊ: \n");
//	if (z == '*')
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			for (int j = 0; j < 3; j++)
//			{
//				c[i][j] = 0;
//				for (int k = 0; k < 3; k++)
//				{
//					c[i][j] += a[i][k] * b[k][j];
//					printf("%d ", c[i][j]);
//				}
//			}
//			printf("\n");
//		}
//	}
//	else
//	{
//		printf("��Ч����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a[3][3] = { {1,0,1} ,{1,2,0},{1,2,1} };
//	int b[3][3] = { {1,1,2}, {1,2,1}, {1,0,2} };
//	int c[3][3] = {0};
//	printf("����1: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	printf("����2: \n");
//	for(int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//	printf("����1����2��ӽ��: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			c[i][j] = a[i][j] + b[i][j];
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", c[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


//int main()
//{
//	int a[3][3] = { {1,2,1},{1,0,1},{1,1,0} };
//	int b[3][3] = { 0 };
//	printf("����a: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			b[j][i] = a[i][j];
//		}
//	}
//	printf("ת�ú�ľ���b: \n");
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}




































































































