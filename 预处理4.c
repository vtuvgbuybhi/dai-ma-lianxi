#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};

//�ڴ���һ��һ��С�ĸ�����ɵ�
//
//c1ռһ���ֽ�      ---��  ��0��λ�ô�    ƫ��������0
//
//aռ4���ֽ�  �����С��4 Ĭ�϶�������������ɱ����������ģ�8      ȡ��Сֵ4      ����4�ı�����    ƫ��������4
//
//c2ռһ���ֽ�     �����1�ı�����       �ͷ���8λ�ô�     ƫ��������8
//
//�ṹ���ܴ�С����ȡ�ṹ���Ա������������������   Ϊ4    ���ṹ���ų�Առ����9���ֽڣ�0-8��  ȡ4�ı���Ϊ12
//
//------------------
//|                |
//------------------
//|                |   0      ��c  <---------��Žṹ�����ʼλ��    ��ʼƫ����
//------------------
//|                |   1
//------------------
//|                |   2
//------------------
//|                |   3
//------------------
//|                |   4      a��ŵ���ʼλ��
//------------------
//|                |   5      
//------------------
//|                |   6      
//------------------
//|                |   7       a��ŵ��������
//------------------
//|                |   8      c2
//------------------
//|                |   9
//------------------
//|                |   10
//------------------
//|                |   11      ռ���ڴ浽����    ��9-11���Ŀռ��˷���
//------------------
//|                |   12
//------------------
//|                |
//------------------
//|                |
//------------------
//|                |
//------------------
//|                |
//------------------


//offsetof   -->  ����ṹ���Ա��ƫ����

//#include<stddef.h>
//
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c1));
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, c2));
//	return 0;
//}



//ʵ��offsetof


//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//
//	//(int)&(((struct S*)0)->c1)
//
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}


//λ��ʽ�ṹ���С

//struct S
//{
//	char a : 4;
//	//char�Ĵ�С��1���ֽ�   ���е�4��bitλ��a�õ���
//	//ʣ��4��bitλ
//
//	char b : 2;
//	//4��bit��b�õ�2������ʣ��2��bitλ
//	char state;
//	//û������λ�� -->ֱ����1��char
//	//ʣ�µ�2��bitλ�����ˣ�ֱ���ٿ���һ���ֽ�
//	//stateֱ��ȫ���õ���
//
//	char c : 1;
//	//cҪ��1��bitλ  --> ֻ���ٿ���һ���ֽ��� ռ��һ��bitλ��ʣ�µ�7��bitλ�˷���
//
//	//�����ܴ�СΪ3���ֽ�
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//
//	return 0;
//}


//int main()
//{
//	int a = 2;
//	return 0;
//}


#include<string.h>

//����

//int main()
//{
//	unsigned char puc[4];
//	char���͵�����,���Դ��4��char���͵�����   --���ܴ�СΪ4���ֽ�
//
//	struct S
//	{
//		unsigned char a;
//		û������λ����ռ1���ֽڣ�aȫ��ռ����
//		puc[0]ȫ������a
//
//		unsigned char data0 : 1;
//		puc[0]�Ѿ���aȫ��ռ����  --��data0ֻ��ռ��puc[1]�е�һ��bitλ��
//		��ʹ��puc[1]�еĵ�λ
//
//		unsigned char data1 : 2;
//		unsigned char data2 : 3;
//	}*s;
//	sλ��ʽ�ṹ���ָ��
//
//	s = (struct S*)puc;
//	puc��������--����Ԫ�ص�ַ ǿ��ת���ɣ�struct S*��ָ��     
//	��sλ��ʽ�ṹ��ָ�븳ֵ��puc
//	sָ��ľ���puc�������Ԫ��
//
//	memset(puc, 0, 4);
//	memset��puc�������4���ֽ����ó�0
//
//
//            --------------------------------------------
//     s----> |00000000 | 00000000 | 00000000 | 00000000 |
//            --------------------------------------------
//              puc[0]     puc[1]     puc[2]     puc[3]
//
//		    ----------------------------------------------------------------
//    s----> |00000000|    00     000      00        0     |00000000|00000000|
//		   -----------------------------------------------------------------
//		   |-- a -- |         |data3|  |data2|   |data0|
//
//
//	s->a = 2;
//	a�з�һ��2    00000000  --�� 00000010
//
//	s->data0 = 3;  
//	011 ��data0ֻ�ܴ��1��bit  ����  0---��1
//
//	s->data1 = 4;
//	0100  ��data1ֻ�ܴ��2��bit   ����00---��00
//
//	s->data2 = 5;
//	0101  dataֻ�ܴ��3��bitλ  ����000--��101
//
//
//    ���puc������ڴ�
//   ----------------------------------------
//  |0000 0010 |0010 1001|0000 0000|0000 0000|
//   ----------------------------------------
//
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	������  %x�ǰ�16���ƴ�ӡ   02�Ǵ�ӡ2λ
//      02        29          00        00
//
//	return 0;
//}


//��֤��ǰ�����ڴ���ֽ���

//int main()
//{
//	int a = 1;
//	char* pa = (char*)&a;
//	if (*pa == 1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return  0;
//}


//������Ĵ�С����

//union Un
////������Ĵ�С��СҲ����Ա�Ĵ�С   --��������һ��  ����һ��������
////����ͬһ��ռ䣬ѡ���ĳ�Ա��С����������һ����������
//{
//	short s[7];// 14   ��Ա���ʹ�С2   ������2
//	int a;//4          ��Ա���ʹ�С4   ������4
//
//	//�������� 4    ������Ĵ�СӦ����4�ı���     14����4�ı���  �˷�2���ֽ�  16
//};
//
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
////	����Ա��С2���ֽ�    ����������2  --�����������С��2���ֽ�
////	s��������ָ��
////	a��ָ��������ı���
////
////     ˵kָ����2���ֽ�ָ��Ŀռ�
////	˵iָ����2��Ԫ��i[0]��i[1]
////
////		          a
////		------------------------
////s--��   |          |           |
////		------------------------
////		  i[0]          i[1]
//
//	s = &a;
//	s->i[0] = 0x39;  
//	s->i[1] = 0x38;
//
//	//��ʮ�����Ƶ�  39  ��  38
//
//	//С�˴洢   -->��λ�ŵ͵�ַ    ��λ�Ÿߵ�ַ
//
// //  ��------�͵�ַ             �ߵ�ַ---------��
//	//         -----------------------
//	//         |   39     |   38     |        
//	//         -----------------------
//
//
//	printf("%x\n", a.k);
//	//ȡk������ʱ���õľ���i�������
//	//��ӡ���������ڴ�洢�෴��    0x 38  39
//	//0x38 39
//	//����39�����ݵĵ�λ    38�����ݵĸ�λ
//
//	return 0;
//}


//���������

//#include<stdlib.h>
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	//û�н�pָ����ڴ�ռ䣬�����ڴ��ͷ�
//	//�ڴ�й¶
//}
//
//void Test()
//{
//	char* str = NULL;
//	GetMemory(str);
//	//��str��ֵ���ݸ�pָ��
//	//p��ʵ��str��һ����ʱ����   ��û�н�str�ĵ�ַ����p
//	//p=NULL
//	//malloc����100���ֽڵĿռ䷵�صĵ�ַ����p   -->GetMemory����
//	//����GetMemory   p���٣�p��GetMemory���βα�����
//
//	strcpy(str, "hello world");
//	//str����NULL    ��"hello world"��һ����ָ��ָ����ڴ�ռ䣨���������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//strncpy��ʵ��
#include<assert.h>

//char* my_strncpy(char* dest, const char* src,const int n)
//{
//	assert(dest && src);//����
//	int count = n;
//	char* a = dest;
//	while (count && (*dest++ = *src++))
//	{
//		count--;
//	}
//	if (count)
//	{
//		while (count--)
//		{
//			*dest++ = '\0';
//		}
//	}
//	return a;
//}
//int main()
//{
//	char arr1[] = "bhybuybuy";
//	char arr2[] = "bit";
//	my_strncpy(arr1, arr2, 6);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<string.h>
//
//int main()
//{
//	char arr1[] = "vgyvuyt";
//	char arr2[] = "hhh";
//	strncpy(arr1, arr2, 5);
//
//	return 0;
//}



//strcpy��ʵ��
//#include<string.h>
//
//int main()
//{
//	char str1[30]="byhugbuyihiui";
//	char str2[6] = "gyutg";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}

#include<assert.h>

//char* my_strcpy(char* p1,const char* p2)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1++ = *p2++)
//	{
//		;
//	}
//	return p1;
//}
//int main()
//{
//	char arr1[30] = "gyugyhguyig";
//	char arr2[6] = "hello";
//	my_strcpy(arr1, arr2);
//
//	return 0;
//}

//#include<string.h>

//int main()
//{
//	char arr1[12] = "gbygy";
//	char arr2[6] = "hellh";
//
//	strncat(arr1, arr2, 6);
//	return 0;
//}

//#include<assert.h>
//char* my_strncat(char* p1, const char* p2, int n)
//{
//	assert(p1 && p2);
//	char* ret = p1;
//	while (*p1 != '\0')
//	{
//		p1++;
//	}
//	while (n && (*p1++ = *p2++))
//	{
//		n--;
//	}
//	*p1 = '\0';
//	return ret;
//}
//
//int main()
//{
//	char arr1[12] = "gvyghuyh";
//	char arr2[8] = "vgygvyu";
//	my_strncat(arr1, arr2, 4);
//	return 0;
//}










































































