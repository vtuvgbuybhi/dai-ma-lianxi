#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	// 1 2 3 4 5
//	// 6 7 8 9 10
//
//	int* ptr1 = (int*)(&aa + 1);
//
//	int* ptr2 = (int*)(*(aa + 1));
//	//*(aa+1)  =  aa[1] --�õ��ڶ�����Ԫ�ص�ַ
//
//	printf("%d %d", *(ptr1 - 1), *(ptr2 - 1));
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "hyu";//���ַ�������Ԫ�ط���p����
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };//����һ�����飬�����ÿһ��Ԫ����ָ��  ---ָ��ָ����ǳ����ַ�������Ԫ�ص�ַ
//	//   a[]
//	// char* ----->"work"  ����Ԫ�ص�ַ��w��
//	// char* ----->"at"    ����Ԫ�ص�ַ��a��
//	//char* ------��"alibbab"  ����Ԫ�ص�ַ  ��a��
//
//
//	char** pa = a;
//	//a��һ��ָ��-----��pa����һ��ָ��---char*  ˵��paָ���������һ���ַ�ָ�루char*��
//
//	pa++;
//	//pa++�Ǽ���һ��char*---  ָ����"at"���ַ���
//
//	//int*p��
//	//p++ �Ǽ���һ��int����
//
//	printf("%s\n", *pa);//��%s��ӡ�Ǵ�ӡ  ����ʼλ�ÿ�ʼ���ַ�������\n����
//
//	return 0;
//}

//int main()
//{
//	char* c[] = {"ENTER","NEW","POINT","FIRST"};
//	//  c[]        һ��ָ��
//	//  char* ----->"ENTER"   0
//	//  char* ----->"NEW"     1
//	//  char* ----->"POINT"   2
//	//  char* ----->"FIRST"   3
//
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	//   CP[]        ����ָ��
//	//   char**  ------> [char* ----->"FIRST" ]  0
//	//   char** -------> [char* ----->"POINT"]   1 
//	//   char** ------->  [char* ----->"NEW"]    2
//	//   char** ------->  [char* ----->"ENTER"]  3
//
//	char*** cpp = cp;
//	//����ָ��
//	//char*** ---->   [char*  ------> [char* ----->"FIRST" ] ]
//
//	printf("%s\n",**++cpp);
//	//cppָ����ǣ�c+3�����ڴ��ַ
//	//++cppָ�����  ��c+2�����ڴ��ַ
//	//*��++cpp��ȡ�����ǣ�c+2���������
//	//**��++cpp��ȡ������ ָ��"POINT"�����ָ��
//
//
//	printf("%s\n", *-- * ++cpp + 3);
//	//++cppָ����ǣ�c+1�����ڴ��ַ
//	//*��++cpp��ȡ���ľ��ǣ�c+1���������
//	//*--*++cpp  ���ǣ�c+1-1���ٽ��н����� ȡ���ľ���ָ��"ENTER"��ָ��
//	//*-- * ++cpp + 3  ����ָ����ָ��"E"���Ԫ������ƶ���"T"��"E"֮���λ��
//
//	printf("%s\n", *cpp[-2] + 3);
//	//*cpp[-2] = **(cpp+(-2))
//	//cpp+(-2)ָ��ľ��ǣ�c+3�����ڴ��ַ
//	//*��cpp+(-2)��ȡ����c+3�����������
//	//**��cpp+(-2)��ȡ���ľ���ָ��"FIRST"��ָ��
//	//**(cpp+(-2))+3   ָ��ľ���"R"��"S"֮���λ��
//
//
//	printf("%s\n", cpp[-1][-1] + 1);
//	//cpp[-1] = *(cpp-11)[-1]  = *(*(cpp-1)-1)
//	//cpp-1ָ��ľ��ǣ�c+2�����ڴ��ַ
//	//*(cpp-1) ȡ���ľ��ǣ�c+2��
//	// *��cpp-1��-1  �õ��ľ��ǣ�c+2-1�����ǣ�c+1��
//	//*��c+1��ȡ���ľ��Ǵ��"NEW"��ָ��   ---���ָ��ָ��ľ���"N"�ĵ�ַ
//	//*(*(cpp-1)-1)+1   ָ��ľ���"N"��"E"֮��
//
//	return 0;
//}



//��ҵ����

//int main()
//{
//	unsigned long p[] = { 6,7,8,9,10 };
//	unsigned long* p1;
//
//	p1 = p;
//	*(p1 + 3) += 3;
//	printf("%d,%d\n", *p1, *(p1 + 3));
//
//	return 0;
//}

//дһ���������������ַ�������
#include<string.h>
#include<assert.h>
//void reverse(char* str)
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = (str + len-1);
//	while (right-left)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		right--;
//		left++;
//	}
//}
//
//int main()
//{
//	char arr[256] = {0};
//	printf("��������Ҫ������ַ���:>");
////	scanf("%s", &arr);//ʶ�𵽿ո��ֹͣ
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//�������
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ����֮�ͣ�����a��һ������
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//��ӡˮ�ɻ���
//#include<math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 10000; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ�������������
//		//1.����i��λ��
//		//2.����i��ÿһλ��n�η�֮��
//		//3.�Ƚ�i==sum
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//
//	}
//	return 0;
//}































































































































