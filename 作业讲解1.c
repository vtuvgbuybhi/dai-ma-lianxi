#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <=5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	int* p = NULL;
//	int arr[10] = { 0 };
//	//����д����ȷ��ԭ��
//	//p=arr   -----��������ָ������Ԫ�ص�ַ����Ԫ�ص�ַ���������ָ������û�����
//	
//	//int(*ptr)[10]=&arr ---->ȡ������ĵ�ַ����������ָ����Ҳ��û�����
//	//��*ptr����һ��ָ��  ---��ָ��ָ�����һ������10��Ԫ�أ�ÿ��Ԫ�������ε�����
//  ����sizeof(arr)��&arr �б�ʾ������������-  --->�����ط����ֵ�arr����ʾ��Ԫ�ص�ַ
// 
// 
// 
//	//int*(*ptr)[10]  ---ָ�������ָ��
//	//��*ptr����һ��ָ��  ---��ָ��ָ�����һ������10��Ԫ�أ�ÿ��Ԫ����ָ�������
//
//	//p=&arr   -->errors
//	//ָ������ĵ�ַӦ���������ָ�������  ---> ���ܴ�������ָ����
//
//
//	return 0;
//}


//��һ���Ǻ���ָ��

//A.int* fun(int a,int b)
//fun(int a,int b)����һ������--->����ǰ���һ��int* �Ǻ����ķ���ֵ ---->�ܽ�����һ����������

//B.int(*)fun(int a,int b)
//û������д��

//C.int(*fun)(int a,int b)
//(*fun)��һ��ָ��---->ָ��ָ�����һ������--->�����ķ���������int

//D.(int*)fun(int a,int n)
//fun(int a,int b)��һ������ ----> �����ķ���������(int*)----->��������


//����  -->  int(*(*F)(int a,int b))(int)

//(*F) ��һ��ָ��  --> (*F)(int a,int b)ָ������һ������
//int(*       )(int)  --->�Ѻ���ָ��ȥ�� --->ʣ�µľ��Ǻ����ķ������͵���
//��������--->(* )��һ��ָ��   --->(* )(int)ָ�����һ������ --->�����ķ���������һ������
//���������ܽ�--->������һ������ָ��,ָ��ָ��������������ֻ��int,�������͵�int


//���� ----->int(*(*p)[10])(int *)    ---->����ָ�������ָ��

//(*p)��һ��ָ�� --->(*p)[10]ָ��ָ�����һ������10��Ԫ������
//int(*   )(int *)ʣ�µ�������ÿ��Ԫ�ص�����--->(* )��һ��ָ��-->(* )(int *)ָ��ָ�����һ������-->�����ķ���������int


//int main()
//{
//	int a[5] = { 5,4,3,2,1 };
//
//	int* ptr = (int*)(&a + 1);
//
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//
//int main()
//{
//	int aa[2][5] = { 10,9,8,7,6,5,4,3,2,1 };
//	int* ptr1 = (int*)(&aa + 1);
//	//&aa+1--->��������aa[2][5]һ��������
//
//	int* ptr2= (int*)(*(aa + 1));
//	//(aa+1)�õ��ڶ��еĵ�ַ
//	//*(aa+1)�õ����ǵڶ��е�����---->*(aa+1) = aa[1]  -->���ʾ����õ��˵ڶ��е�������
//
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}


//�����
//ʵ��һ������,���������ַ����е�k���ַ�
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

//��ת�ַ���
//��һ
//void left_move(char* arr, int k)
//{
//	int i = 0;
//	//���ַ�����
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	//�����ַ���
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}

//��2
//������ת��
//��������
//abcdef
// ba fedc
// cdefab

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);//����  ---��arr�ǿ�ָ��ʱ����  --��һ��д����assert(arr!=NULL)
//	int len = strlen(arr);
//	assert(k <= len);//����  ---�������������ڵ�����ʱ����
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//���������ַ���
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	//�����ַ���
//	left_move(arr, 3);
//	printf("%s\n", arr);
//	return 0;
//}


//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���

//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);//����  ---��arr�ǿ�ָ��ʱ����  --��һ��д����assert(arr!=NULL)
//	int len = strlen(arr);
//	assert(k <= len);//����  ---�������������ڵ�����ʱ����
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//���������ַ���
//}
//
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);//�ж������ַ����Ƿ����--->��ȷ���0
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//		printf("no\n");
//	return 0;
//}







































