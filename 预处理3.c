#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//��������


//#define DEBUG

//int main()
//{
//	int arr[10] = { 1,2,3,4,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//		//�������˼��˵  DEBUG Ҫ��δ������  #ifdef   -- #endif  ֮������ݲ��������
//		//ֻҪDEBUG ����  ���ܶ���ʲô������   ��#ifdef   --  #endif ֮������ݲ������
//#endif
//	}
//
//	return 0;
//}

//��֧��������

//int main()
//{
//	int arr[10] = { 1,2,3,4,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0
//		printf("%d ", arr[i]);
//
//		//#if  ���һ���������ʽ   
//		//���������ʽΪ��  #if   ---  #endif  ֮�����ִ��  Ϊ��  ��ִ��
//#endif
//	}
//	return 0;
//}

//�����֧��������

//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==2
//	printf("hehe\n");
//#else
//	printf("�һ�\n");
//#endif
//	return 0;
//}


//int main()
//{
////#if defined(DEBUG)
////	printf("haha\n");
////#endif
//	//��˼�����defined�����DEBUG������м�Ĵ���
//
//#ifdef DEBUG
//	printf("haha\n");
//#endif
//
////����д����һ�µ�
//	
//	return 0;
//}

//int main()
//{
//#if !defined(DEBUG)
//	printf("haha\n");
//
//	//û�ж���DEBUG����Ϊ��    ����
//	//����������Ϊ��    ������
//#endif
//	return 0;
//}

//Ƕ��ָ��


//�ļ��İ���

//���ļ��İ���
//#include<>

//�����ļ��İ���
//#include""


//��ν��ͷ�ļ��ظ�������������----->Ƕ���ļ�
//��ÿ��ͷ�ļ��Ŀ�ͷд
//#ifndef __TEST_H__
//#define __TEST_H__
//   ͷ�ļ�����
//#endif

//ifndef����˼��  __TEST_H__�Ƿ񱻶���  ��û�б�����������м����
//                                       �б������򲻱����м����
//
////����
//ֱ����ͷ�ļ����     #pragram once































































































