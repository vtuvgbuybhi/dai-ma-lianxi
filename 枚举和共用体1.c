#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//ö������
//enum Sex
//{
//	male,//ö�ٵĿ���ȡֵ ---�� ����
//	female,
//	secret,
//};
//
//enum Color
//{
//	red,//0
//	green,//1
//	blue,//2
//};
//
//int main()
//{
////	enum Sex s= male;//s�����Ա��һ������   -->��������ֵΪmale
////	s = female;//���Խ�s������ֵΪfemale   ���ǲ��ܸ�ֵΪSex��û�г��ֵĿ���ֵ
//
//	printf("%d %d %d ", red, green, blue);
//
//	return 0;
//}

//
//enum Sex
//{
//
//	male=2,//ö�ٵĿ���ȡֵ ---�� ����    male=2��һ����ʼֵ
//	female=4,
//	secret=8,
//};
//
//int main()
//{
//	printf("%d %d %d", male, female, secret);
//	return 0;
//}

//enum Color
//{
//	red,
//	green,
//	blue,
//};
//
//int main()
//{
//	enum Color c = blue;//������c��ֵΪblue
//	enum Cloor c = 2;//int    ���︳ֵ���������---�����������������в����
//
//	return 0;
//}


//#define red 0
//#define green 1
//#define blue 2
//
//int main()
//{
//	//enum Color c=red��
//	int color = red;//�������д����һ����
//
//	return 0;
//}


//Ϊʲôʹ��ö��
//1.���Ӵ���Ŀɶ��ԺͿ�ά����
//2.��#define ����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//3.��ֹ������Ⱦ
//4.���ڵ���
//5.ʹ�÷��㣬һ�ο��Զ���������


//����-������-������

//union Un
//{
//	char c;
//	int i;    // c��iռ��ͬһ���ڴ�ռ�
//};
////5���ֽ�
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}


//�жϵ�ǰ������Ĵ�С�˴洢

//int main()
//{
//	char arr[10] = "abc";
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//
//	//�͵�ַ   --------------------���ߵ�ַ
//	//....[][][11][22][33][44][][][][]....  -----����˴洢ģʽ
//	//....[][][44][33][22][11][][][][]....   ---��С�˴洢ģʽ
//	//̸��һ�����ݣ�������ڴ��д���ֽ�˳��
//	//��С���ֽ�������
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	//00000000 00000000 00000000 00000001
//	// 00 00 00 01
//	int* pc = &a;
//	if (*(char*)pc==1)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;//����һ�����������u
//	u.i = 1;//���������е�i��ֵһ��1��ô���漰�˴�С�˴洢����
//
//	// 00 00 00 01
//	//c��i��ͬռ��ͬһ���ڴ�ռ�
//	// 01 00 00 00
//	//cռһ���ֽ� ���� 01
//
//	//����1��ʾС��
//	//����0��ʾ���
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��");
//	else
//		printf("���");
//	return 0;
//}


//enum Sex
//{
//	male,//0
//	female,//1
//	secret,//2
//};
//int main()
//{
//	enum Sex s = male;//������ȡ����һ�����ε�ֵ
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//������Ĵ�С����������Ա�Ĵ�С
//������Ա��С����������������������ʱ�򣬾�Ҫ���뵽����������������
//
//union Un
//{
//	int a;
//	char arr[5];//ռ5���ֽ�
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}















