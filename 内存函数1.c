#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

// �ڴ��������

//int main()
//{
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//������arr1�����ݿ�����arr2����ȥ
//
//	//char*dest  , const char*src---->�ַ����ĵ�ַ
//
//	//strcpy(arr2, arr1);//�����������������ָ��
//	//����ֻarr2[0]=1��������ȥ��
//
//	//��ǰ������С�˴洢ģʽ
//	//arr1���ڴ��еĴ��
//	// һ������ռ4���ֽ�
//	// 01 00 00 00     02 00 00 00    03 00 00 00    04 00 00 00      05 00 00 00
//	
//	//strcpy   �Ŀ�����һ��һ���ֽڵĿ���������
//	//  ����  01  ���������� 00   ������"\0"����ֹͣ��
//
//	//����strcpyֻ�ܿ����ַ���
//
//	//memcpy   ,   memmove    ,memcpy  ,memset  ---->�ڴ溯��
//
//	//memcpy  ---��  �ڴ濽��
//	//void* memery(void* destination   ,  const void*source  ,size_t  num)
//	//num    --->   �ֽ�
//
//	//void*    --->  ͨ�����͵�ָ��  ---�� ������ָ��
//	//int arr1[] = { 1,2,3,4,5 };
//	//int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//
//
//	return 0;
//}

//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr1[] = { {"����",15},{"����",18} };
//	struct S arr2[2] = { 0 };
//	memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//��ô����Ҫʵ��������һ��memcpy�ĺ���Ҫ��ôʵ����

//void* my_memcpy(void* dest, void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	//num--   ---����ʹ�ú����
//	//��num=4Ϊ��
//	//num  =4  ���룬����num���3
//	//num=3  ����   ��num���2
//	//num=2 ����   ��num���1
//	//num=1����  ��num���0
//	//��һ��num=0ʱ������������
//	{
//		*(char*)dest = *(char*)src;
//		//(char*)dest   --> ǿ��ת���ɣ�char*������  --��һ�ν����÷���һ���ֽڵĿռ�
//
//		++(char*)dest;//�������һ���ֽ�
//		++(char*)src;//�������һ���ֽ�
//	}
//	return ret;
//}
//
//int main()
//{
//	struct S arr1[] = { {"����",15},{"����",18} };
//	struct S arr2[2] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	return 0;
//}



//memmove  --- >��������ڴ��ص������

//c���Ա�׼
//memcpy    ---  >ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove    ----�� �����ص��ڴ�Ŀ���

//void* my_memery(void* dest, void* src, int n)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (n--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//��ν�1 2 3 4 5���ݿ�����3 4 5 6 7 ����ȥ
//	//int i = 0;
//	//my_memery(arr+2,arr,20);//��������
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	// 1 2 1 2 1 2 1 8 9 10
//	//�ڴ��ص�
//	// 1 2 3 4 5 6 7 8
//	// 1 2 1 4 5 6 7 8
//	// 1 2 1 2 5 6 7 8
//	// 1 2 1 2 1 6 7 8
//	// 1 2 1 2 1 2 7 8
//	// 1 2 1 2 1 2 1 8 
//
//	//memcpy(arr + 2, arr, 20);
//	memcpy(arr + 2, arr,20);//�����ڴ��ص������
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


















































