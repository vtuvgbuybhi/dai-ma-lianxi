#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hello\n");
//		arr[i] = 0;
//	}
//
//	return 0;
//}

//1.ջ����Ĭ��ʹ�ã�
//��ʹ�øߵ�ַ���ռ�
//��ʹ�õ׵�ַ���ռ�

//2.���������±������--��ַ���ɵ׵��߱仯��


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//void my_strcpy(char* dest,const char* src)//����Դͷ���ݲ����޸�
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest,const char* src)//����Դͷ���ݲ����޸�
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
//	assert(src != NULL);//����
// 
////��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
// 
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//�ַ�������
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}

//int main()
//{
//	const num = 10;
//	const int* p = &num;
//	*p = 20;//err const ����ָ�������*���ʱ�����ε���*p Ҳ����˵������ͨ��p���ı�*pֵ
//	int* const p = &num;
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ��������� Ҳ����˵��p���ܱ��ı���
//
//
//	printf("%d", num);
//
//	return 0;
//}

//#include<stdlib.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//����--��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char arr[] = "vbubuy";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}





















