#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strcmp --- �ַ����Ƚ�

//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "sqwr";
//	int ret = strcmp(p1, p2);
//	printf("%d\n", ret);
//
//	//�Ƚϵ����ַ�������Ԫ�ص�ASSICֵ  -- ��һ����ĸ��Сһ���Ƚϵڶ���
//	//if  p1>p2   --����һ������0������
//	//if  p1=p2    --����һ������0������
//	//if  p1<p2   --����һ��С��0������
//
//	return 0;
//}

//my_strcmp(const char* str1,const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;//С��
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//
//	return 0;
//}



//strncpy 

//ģ��ʵ��strncpy

//char* my_strncpy(char* dest, char* src, int count)
//{
//	assert(dest && src);
//	char* ret = dest;
//
//	//����Ҫ������Ŀ���ַ�������������Ŀ�ĵ�
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//
//	if (count)
//	{
//		while(--count)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//
////	strncpy(arr1, arr2, 5);//��"abc"�󲻹��ĵط����ַ�ȫ��ת������"\0"  ��  
//	my_strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}


//strncat

//char* my_strncat(char* dest, char* src, int n)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//��ָ��ָ��dest��ĩβ
//	while (*dest)
//	{
//		dest++;
//	}
//	//����׷��
//	while (*dest++ = *src++)
//	{
//		n--;
//		// ��n=0ʱ�����ڽ���׷����׷�ӵ�ĩβ��"\0"
//		if (n == 0)
//		{
//			*dest = '\0';
//			return ret;
//		}
//	}
//	//��srcȫ��׷�ӵ�dest��ĩβʱ���պý���ѭ��---��srcĩβ��"\0"׷�ӵ�dest��ĩβ
//	return ret;
//
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "world";
//	//strncat(arr1, arr2, 3);
//	my_strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//}


//   strncmp  -- �ַ����Ƚ�

//int my_strncmp(const char* dest, const char* src, int count)
//{
//	assert(dest && src);
//	while (*dest++ == *src++)
//	{
//		if (count == 0)
//		{
//			return 0;
//		}
//		count--;
//	}
//	if (*dest < *src)
//	{
//		return (*dest - *src);
//	}
//	else
//		return ( * dest - *src);
//
//}
//
//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	//int ret=strcmp(p1, p2);
//	//printf("%d\n", ret);
//	//d<q    p1<p2   ����һ��С��0������
//
//	//int ret = strncmp(p1, p2, 3);
//	//printf("%d\n", ret);
//	//ǰ�������ַ�  p1=p2   ����0
//
//	int ret = my_strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//
//
//	return 0;
//}


//   strstr   �������ַ����Ƿ����

//   NULL --��ָ��
//   NUL  /Null ----"\0"

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s1 != '\0') && (s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 =='\0')//����Ҫ�ҵ��ִ���  Ŀ�ĵص��ַ�����ʱ����ǰ����
//		{
//			return cur;  //�ҵ���
//		}
//		if (!*s1)//----    !*s1  = (*s1=='\0')    
//		//ԭ��*s1����0�Ǽ� --����ǰ����ϣ�����ת��������
//		//��*s1������0ʱ���� --- ǰ�����! ����ת�����˼�
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//û���ҵ�
//}
//
//int main()
//{
//	char* p1 = "abcdefjki";
//	char* p2 = "def";
//	char*ret=strstr(p1, p2);
//	int ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�ַ���������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}





























































