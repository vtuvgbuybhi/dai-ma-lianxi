#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


//������

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}

//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	//p��GetMemory���Ͳα��� --����GetMemory�ڲ���Ч�����˾���Ч��
//
//	//str���ǿ�ָ��
//	strcpy(str, "hello world");//��ָ��û��ָ����Ч���ڴ��ַ�������ڴ�ʧ�ܣ��������
//	printf(str);
//}
//
//int main()
//{
//	//���д���������������
//	//�����ڴ�й¶������  ---�� 
//	//str ��ֵ���ݵ���ʽ��p
//	// p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}


//��θ���ȷ

//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	//p��GetMemory���Ͳα��� --����GetMemory�ڲ���Ч�����˾���Ч��
//
//	//str���ǿ�ָ��
//	strcpy(str, "hello world");//��ָ��û��ָ����Ч���ڴ��ַ�������ڴ�ʧ�ܣ��������
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	//���д���������������
//	//�����ڴ�й¶������  ---�� 
//	//str ��ֵ���ݵ���ʽ��p
//	// p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}

//����2

//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	//p��GetMemory���Ͳα��� --����GetMemory�ڲ���Ч�����˾���Ч��
//
//	//str���ǿ�ָ��
//	strcpy(str, "hello world");//��ָ��û��ָ����Ч���ڴ��ַ�������ڴ�ʧ�ܣ��������
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	//���д���������������
//	//�����ڴ�й¶������  ---�� 
//	//str ��ֵ���ݵ���ʽ��p
//	// p��GetMemory�������βΣ�ֻ���ں����ڲ���Ч
//	//��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й¶
//
//	Test();
//
//
//	//char* str = "abcdef";
//	//printf("%s\n", str);
//	//printf(str);
//	//printf("\n");
//	//printf("abcdef");
//
//	return 0;
//}


//������
//char* GetMemory(void)
//{
//	char p[] = "hello world";//�����ֲ�������ֻ�ں����ڲ���Ч--�����˺�������
//	return p;//����ջ�ռ�ĵ�ַ����
//}
//
//void test()
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);//�Ƿ������ڴ�
//}
//
//int main()
//{
//	test();
//	return 0;
//}




////����д��Ҳ���������
//int* test()
//{
//	int a = 10;//ջ���Ͽ���
//	return &a;
//}
//
//int main()
//{
//	int*p=test();
//	*p = 20;//�Ƿ�����
//	return 0;
//}


//����д���ǿ�ȡ��
//int* test()
//{
//	//static���ξֲ�������ʱ���������ڱ䳤��
//	//�����������������
//	static int a = 10;//���ھ�̬����
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//����д���ǿ�ȡ��

//ptr�������٣�����ptrԭ��ָ����ǿ��ڴ�û�����٣�������֮ǰ��ptrָ����ǿ��ڴ洫����pָ�����
//int* test()
//{
//	int* ptr = malloc(100);//�����Ͽ���
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//	return 0;
//}

	
//ָ�����������
//int* f1(void)
//{
//	int x = 10;//ջ���Ͽ���
//	return &x;
//	//����x�ĵ�ַ---�����˺���x��ַ����
//	//��һ������ָ�������f1���ص�ֵ--->��������ɷǷ����ʵ�����
//}



//int* f2(void)
//{
//	int* ptr;
//	//ptr��һ��δ��ʼ���ľֲ�ָ��
//	//ָ��������δ֪��---��Ұָ��
//
//	*ptr = 10;//��Ұָ����и�ֵ�����������Ƿ������ڴ������
//
//
//	return ptr;
//}






































