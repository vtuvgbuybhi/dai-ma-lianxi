#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p =(int*) malloc(10*sizeof(int));
//	//(int*)ǿ������ת��  malloc���ص���void*ָ������
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//���ٳɹ�������ʹ�ÿռ�
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��һ����������ϵͳ
//	free(p);
//
//	return 0;
//}


//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	//(int*)ǿ������ת��  malloc���ص���void*ָ������
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		//���ٳɹ�������ʹ�ÿռ�
//		for (int i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (int i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��һ����������ϵͳ
//	free(p);
//	//��Ȼfree��p��pָ����ǿ��ڴ�ռ��ͷ���  ����ָ��pû�з����仯  ������Ȼ�ܹ��ҵ�����ڴ�ռ��Ƿǳ�Σ�յ�
//	p = NULL;//p��ֵΪ��ָ��--����ôp�ͳ�����֮ǰָ����ǿ��ڴ�ռ�ʧȥ��ϵ
//	
//	return 0;
//}


//calloc����

//int main()
//{
//	//malloc(10*sizeof(int))//����ܴ�С�ֽ���
//	int* p = (int*)calloc(10, sizeof(int));//10��Ԫ��  ��ÿ��Ԫ�صĴ�С��4���ֽ�
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	free(p);//free�����������ͷŶ�̬���ٵĿռ��
//	p = NULL;
//	return 0;
//}


//realloc
//������̬�����ڴ�ռ�Ĵ�С

//int main()
//{
//	int*p=(int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}//��ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//��������20���ֽڲ�������ʹ��Ҫ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//void* realloc(void* memblock, size_t size);
//
//	int*p2=realloc(p, 40);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p2 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p2 + i));
//	}
//
//	return 0;
//}



//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}//��ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//��������20���ֽڲ�������ʹ��Ҫ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//
//	//void* realloc(void* memblock, size_t size);
//
//	p = realloc(p, 4000);//��ôд���кܴ�ķ���
//	//realloc ʹ��ע������
//	//1.���pָ��ռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ䣬
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	
//	//3.����һ���µı���������realloc�����ķ���ֵ
//	int* ptr = realloc(p, INT_MAX);
//	if (ptr != NULL)
//	{
//		p = ptr;//�����Ǳ���realloc����ʧ�ܣ�����pֱ�Ӹ�ֵ�ɿ�ָ�룬�Ҳ���ԭ�����ڴ�ռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}


//1.  ---��   �Կ�ָ����н����ò���
//int main()
//{
//	//����д�������������  --��malloc�ķ���ֵһ��Ҫ�����ж�
//	int* p =(int*) malloc(40);
//	//��һmallocʧ���ˣ�p��ֵΪNULL
//
//	int i = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//�Կ�ָ����м�i���ǿ�ָ��  --�� �Կ�ָ����н�����������
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.�Զ�̬�ڴ�ռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;//Խ�����
//		}
//	}
//	free(p);//�ͷŶ�̬���ٵ��ڴ�
//	p = NULL;
//	return 0;
//}

//�ԷǶ�̬�ڴ濪�ٿռ����free
//int main()
//{
//	int a = 10;//��ջ�����ٵĿռ�
//	int* p = &a;
//	*p = 20;
//	free(p);
//	p = NULL;
//	return 0;
//}

































































































