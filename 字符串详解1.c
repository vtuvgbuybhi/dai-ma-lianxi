#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//strlen  ---  ����"\0"��ֹͣ

//int main()
//{
//	//int len = strlen("bgyub");//ĩβ����"\0"
//
//	char arr[] = { 'a','b','c' };//ɶʱ������"\0"��֪��
//	int len = strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}


//ģ��ʵ��strlen����
//1.�������ķ���
//2.�ݹ�
//3.ָ��-ָ��

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	if (*str == '\0')//�ݹ�ѭ���Ľ�������
//	{
//		return 0;
//	}
//	return 1 +  my_strlen(str + 1);
//}

//int my_strlen(char* str)
//{
//	assert(str != NULL); //����ָ�룬��ָ֤�����Ч��
//	char* stop = str;
//	while (*stop != '\0')
//	{
//		stop++;
//	}
//	return stop - str;
//}

//int main()
//{
//	//int len = my_strlen("gyuih");
//	
//	if (strlen("vgu") - strlen("ftghyj") > 0)
//	//size_t strlen(const char* str) ---  ������strlen���ص�ֵ����
//	//size_t ����unsigned int
//		// 3        -       6  =  -3
//		// -3 ���ڴ����ǲ���
//		//ʵ����-3���ڴ��ﵱ����unsigned int �����ʱ��һ����һ������0����
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//
//	return 0;
//}


//   strcpy --�ַ�������

//char* my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//����
//	assert(src != NULL);
//	char* ret = dest;
//
//	//����srcָ����ַ�����destָ��Ŀռ䣬����"\0"
//	while (*dest++ = *src++)//������ʽ�Ľ������"b","h","i","\0"
//	{
//		;
//	}
//	//����Ŀ�ĵص���ʼλ��
//	return ret;
//}
//int main()
//{
//	char arr1[] = "vgbyuhgb";
//	char arr2[] = "bhi";
//
//	char* arr1 = "vbyunj";//����һ������ʾ����arr1�ǳ����ַ��������޸�
//
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//strcat ---- ׷���ַ���

//int main()
//{
//	char arr1[30] = "fvty";//Ŀ�ĵصĿռ�����㹻��  --- Ŀ�ĵ�ĩβҲ����Ҫ��"\0"
//	char arr2[] = "fvtyfv";//Դͷ����Ҫ��"\0"
//	strcat(arr1, arr2);  // Ŀ�ĵ� arr1   ---    ��ʼλ��   arr2
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//�ҵ�Ŀ�ĵ��ַ�����ĩβ"\0"
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "vbyu";
//	char arr2 = "vtyuvgtuy";
//
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}




















































































