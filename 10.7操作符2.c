#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 0;
//	char b = 'w';
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(char));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int[10]));
//
//	return 0;
//}

//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ��++����++����ʹ��
//	printf("%d\n", a++);//����++����ʹ�ã�����++
//
//	return 0;
//}
//void test1(int arr[])//���鴫��ʱ������ȥ������Ԫ�صĵ�ַ����ָ�������գ�64Ϊ����ϵͳָ��8���ֽڣ�32Ϊ����ϵͳָ��4�ֽ�
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}


//�߼���&&���߼���|| ������
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//����ͬʱΪ�棬��Ϊ��
//	int f = a || b;//ֻҪ��һ��Ϊ���Ϊ��
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;
// a=0�����Ժ����++b,d++����������
//	printf(" a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//����������  == ��Ŀ������ 
//exp1 �� exp2 : exp3
//int main()
//{
//	int a = 0;
//	int b = 0;
//	if (a > 5)
//	{
//		b = 3;
//	}
//	else
//		b = -3;
//	return 0;
//}

//int main()
//{
//	int b = 0;
//	int a = 0;
//	b = (a > 5 ? 3 : -3);//��Ŀ������
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = (a > b ? a : b);//a>b����Ϊ�淵��a������Ϊ�ٷ���b
//	printf("%d", max);
//	return 0;
//}
//����һ���ṹ������-struct stu
//struct stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��sturct stu ������ʹ�����һ��ѧ������s1������ʼ��
//	struct stu s1 = {"����",20,"2154125454"};
//	struct stu* ps = &s1;
//
//	//printf("%s\n",(*ps).name);
//	//printf("%d\n", (*ps).age);
//
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
// //�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011  -  a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111--b
//
//	//a��b������
//	//00000000000000000000000000000001
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//
//	char c = a + b;
//	//10000010--c
//	//1111111111111111111111111100000010--����
//	//1111111111111111111111111100000001--����
//	//1000000000000000000000000011111110--Դ��==-126
//
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	return 0;
//}
































