#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
//struct S4
//{
//	char c1;
//	struct S3 s1;
//	double i;
//};
//
//int main()
//{
//	//struct S3 s3 = { 0 };
//	//printf("%d\n", sizeof(s3));
//	//ȡ�ڴ��е�һ���ڴ�
//	//һ��double 8���ֽڣ�����ʼλ�ÿ�ʼ��
//
//
//	// 1.  ----      ����double
//    // 2.  ----
//	// 3.  ----
//	// 4.  ----
//	// 5.  ----
//	// 6.  ----
//	// 7.  ----
//	// 8.  ----       doubleռ�� 1 -8 ���ڴ�ռ�  8���ֽ�
//	// 9.  ----       �����c
//	//10.  ----
//	//11.  ----
//	//12.  ----       �����i
//	//13.  ----
//	//14.  ----
//	//15.  ----
//	//16.  ----       ������С��������4����������
//
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));
//	//�ṹ����Ƕ�׽ṹ���С����μ���
//	//s3ռ16���ֽ�   --->�����s3�Ķ�����    --���ҵ�s3����������   Ϊ8����8�ı�����ʼ��ţ�
//
//	// 1.   ----      �����λ�÷�c1
//	// 2.   ----     
//	// 3.   ----
//	// 4.   ----
//	// 5.   ----
//	// 6.   ----
//	// 7.   ----
//	// 8.   ----        ��s3�����￪ʼ���
//	// 9.   ----
//	// 10.  ----
//	// 11.  ----
//
//
//	// 24    ----     ��s3��ŵ�����ͽ�����
//	// 25    ----     ��i�����￪ʼ���
//	// 32    ----     ��i������ͽ�����
//
//	//�ҵ���Ա�����������������8������ô�ṹ��Ĵ�СΪ����������������---���պ�Ϊ32
//	return 0;
//}

//�ṹ���������ÿռ任ʱ��

//


//����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c;//1
//	//3
//	double b;//8
//};
//#pragma pack()//ȡ��Ĭ�϶�����
//
////struct S
////{
////	char c;//1
////	//7
////	double b;//8
////};
//
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//
////	offsetof();//����ṹ���Ա�������ʼλ�õ�ƫ����
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


struct S
{
	int a;
	char c;
	double d;
};

//void Init(struct S tmp)//tmpֻ��s�ṹ��ĸ���һ�ݣ��ı�tmp�������ܸı�s�ڲ�������
//{
//	tmp.a = 100;
//	tmp.c = 'w';
//	tmp.d = 3.14;
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Tnit(s);//ͨ���������ṹ���ʼ��Ϊ������Ҫ������
//	//���ִ����ǲ��еģ����봫&s���ǿ��Ե�
//
//	return 0;
//}



//void Init(struct S *ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
//void Print1(struct S s)
//{
//	printf("%d %c %lf\n", s.a, s.c, s.d);
//}
//
//void Print2(struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//�����ڲ���ı亯���ⲿ��ֵ�������ֵ�ĵ�ַ����ȥ
//
//	Print1(s);//ֻ�ǽ�s�����ݴ�ӡ������Ҫ�����޸�s������
//	Print2(&s);
//	return 0;
//}


























































