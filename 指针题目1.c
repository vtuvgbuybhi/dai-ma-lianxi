#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
	//char arr[]={'a','b'};
	//char arr[] = "atygbnu";

	//my_strlen(const char* str);

//	printf("1==%d\n", strlen(arr));
//	printf("2==%d\n", strlen(arr+0));
////	printf("3==%d\n", strlen(*arr));//*arr�ǡ�a�� ��97 �൱��97�����ڴ��ַ��err��
////	printf("4==%d\n", strlen(arr[1]));//һ���Ĵ���
//
//		                                                   //my_strlen(const char* str);
//	printf("5==%d\n", strlen(&arr));//&arr-ȡ��������ĵ�ַ--����ָ��    char��*p��[7]=&arr   �о��� ���Ͳ���
//
//
//	printf("6==%d\n", strlen(&arr + 1));//���ֵ    һ�������о���
//
//
//	printf("7==%d\n", strlen(&arr[0] + 1));



	//printf("1==%d\n", sizeof(arr));//sizeof(arr)�����������Ĵ�С--��λ���ֽ�
	//printf("2==%d\n", sizeof(arr+0));//������ǵ�ַ�Ĵ�С--arr+0��Ԫ�ص�ַ�Ĵ�С
	//printf("3==%d\n", sizeof(*arr));
	//printf("4==%d\n", sizeof(arr[1]));
	//printf("5==%d\n", sizeof(&arr));
	//printf("6==%d\n", sizeof(&arr+1));
	//printf("7==%d\n", sizeof(&arr[0] + 1));//&arr[0]+1�ǵڶ���Ԫ�ص�ַ

//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//
//	printf("1==%d\n", strlen(p));
//	printf("2==%d\n", strlen(p + 1));
//	//printf("3==%d\n", strlen(*p));//�Ƿ�����
//	//printf("4==%d\n", strlen(p[0]));
//
//
//	printf("5==%d\n", strlen(&p));//���ֵ
//
//
//
//	printf("6==%d\n", strlen(&p+1));//���ֵ
//	printf("7==%d\n", strlen(&p[0] + 1));



	//printf("1==%d\n", sizeof(p));//����ָ�����p�Ĵ�С

	//printf("2==%d\n", sizeof(p + 1));//p+1�õ������ַ�b�ĵ�ַ

	//printf("3==%d\n", sizeof(*p));

	////arr[0]==*(arr+0)==*(p+0)==p(0)
	//printf("4==%d\n", sizeof(p[0]));

	//printf("5==%d\n", sizeof(&p));
	//printf("6==%d\n", sizeof(&p+1));
	//printf("7==%d\n", sizeof(&p[0] + 1));
//
//	return 0;
//}


//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", &a[0][1]);
//
//	printf("1==%d\n", sizeof(a));
//	printf("2==%d\n", sizeof(a[0][0]));
//
//	printf("3==%d\n", sizeof(a[0]));//a[0]�൱�ڵ�һ����Ϊһά�����������
//	//sizeof(arr[0])����������������sizeof�����ڣ�������ǵ�һ�еĴ�С
//
//	printf("4==%d\n", sizeof(a[0] + 1));//��һ�еڶ���Ԫ�صĵ�ַ
//	printf("5==%d\n", sizeof(*(a[0] + 1)));
//
//	printf("6==%d\n", sizeof(&a[0] + 1));//�ڶ��е�ַ
//	printf("7==%d\n", sizeof(*(&a[0] + 1)));
//
//	printf("8==%d\n", sizeof(a + 1));//a�Ƕ�ά�������������û��sizeof������������Ҳû��&����������������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
//	
//	printf("9==%d\n", sizeof(*(a + 1)));
//	printf("10==%d\n", sizeof(*a));
//
//	printf("11==%d\n", sizeof(a[3]));//16
//
//
//	return 0;
//}















































