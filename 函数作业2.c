#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//2.ͳ�ƶ�������1�ĸ���
// ����1----�������ֻ����������--��ȻҲ����������Ҫ�Ľ�
//int count_bit_one(int n)-----��int n �ĳ�unsigned int n---��n����޷�����
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
//	printf("����һ����;\n");
//	scanf("%d", &i);
//	//дһ��������i�Ķ�����(����)��ʾ���м���1
//	int count=count_bit_one(i);
//	printf("%d", count);
//	return 0;
//}

//����2
//int count_bit_one(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)//��λ����һ��1
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

//����3--����--�ּ���1��ѭ������
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

////2.��������֮�䲻ͬ������λ�ĸ���
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

//3.��һ����������������λ��ż��λ�������Ƕ���
//void Print(int n)
//{
//	int i = 0;
//	printf("����λ�ϵ���Ϊ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
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

//3.��������������ֵ�����������������
// ����1
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

//����2
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

//��ָ���ӡ��������
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

//��ӡ9*9�˷���
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

//ģ��ʵ��strlen
//�ü������ķ���ʵ��
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

//��ָ��-ָ��ķ���ʵ��--�õ��ľ����м�Ԫ�صĸ���
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

//�ú����ݹ�ķ���
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
//�ַ�������(�ݹ�ʵ��)
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































