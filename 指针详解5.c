#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int(*pa)[10] = &arr;
//	//����ָ��
//	int(*padd)(int, int) = Add;
//	//(*padd)(1,2)---�����������
//	//padd��1��2��---�����������
//	//*�ڵ����������ʱ���ɲ���ʵ������
//
//
//	//����ָ������
//	int(*pa[5])(int, int) = {0};//���5��������ַ������
//
//	//ָ�뺯��ָ�������ָ��
//	int(*(*ppfarr[5]))(int, int) = &pa;
//
//	return 0;
//}

//�ص�����

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	//char* pc = &a;
//	//char ch = 'w';
//
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ��  ���ܽ��н����ò���
//	//void* ���͵�ָ��  ���ܽ��мӼ������Ĳ���
//
//
//
//	return 0;
//}

#include<stdlib.h>



//Bubblesort(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}

//struct stu
//{
//	char name[20];
//	int age;
//};
//
////qsort --�⺯��--����
////quick sort--��������
//
////void qsort(void* base,----------//������������Ԫ�صĵ�ַ
////	       size_t num, ----------//��������Ԫ������ĸ���
////	       size_t width, ----------//����������ÿ��Ԫ�صĴ�С---��λ���ֽ�
////	       int(*cmp)(const void* e1, const void* e2)------����ָ��---�Ƚ�����Ԫ�������õĺ�����ַ--�������ʹ�����Լ�ʵ��
////           );
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ�ĺ���
//	return  *(int*)e1 - *(int*)e2;
//
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	return ((int)(* (float*)e1 - *(float*)e2));
//}
//
//int cmp_stu_age(const void*e1,const void*e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//
//}
//
//int cmp_stu_name(const void* e1, const void* e2)
//{
//	//�Ƚ���������--���ǱȽ��ַ���--����ֱ���ô���С�ڵ���ֱ�ӱȽ�
//	//Ӧ����strcmp����ʵ��
//	return strcmp(((struct stu*)e1)->name - ((struct stu*)e2)->name);
//
//}
//
//void test1()
//{
//	int arr[10] = { 2,3,4,1,6,5,8,7,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);//����qsort ����һ����������
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test2()
//{
//	float arr[] = {4.0,2.0,6.0,9.0,7.0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_float);//����qsort ����һ������������
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%f ", arr[i]);
//	}
//}

//void test3()
//{
//	struct stu s[3] = { {"gbyiuh",20},{"fg",18},{"fdvtgy",45} };//�ṹ������
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_age);
//}
//
//void test4()
//{
//	struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };//�ṹ������
//	int sz = sizeof(s) / sizeof(s[0]);
//
//}




//
//int main()
//{
	//test1();
	//printf("\n");
	//test2();
	//printf("\n");
	//test3();
	//test4();




	//ð��������
	//ð��������ֻ��������������

	//qsort---c�����ṩ��һ���⺯��---���������������͵�����

	//int arr[10] = { 2,3,4,1,6,5,8,7,10,9 };

	//struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };//�ṹ������
	//float f[] = { 9.0,1.0,5.0,6.4 };


	//int sz = sizeof(arr) / sizeof(arr[0]);

	//qsort(arr, sz, sizeof(arr[0]), cmp_int);//����qsort ����һ����������

	////Bubblesort(arr, sz);


	//for (int i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

//	return 0;
//}


//qsort --�⺯��--����
//quick sort--��������





//ð������ֻ��������������---��ô��������ð������Ҳ������ͬ���͵�������

//Bubblesort(int arr[], int sz)//-------
//{
//	for (int i = 0; i < sz; i++)
//	{
//		for (int j = 0; j < sz -i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}


//void swap(char*buf1, char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void Bubblesort(void* base, int sz, int width, int(*cmp)(void* e1,void* e2))
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			//��Ԫ�رȽ�
//			if (cmp((char*)base + j * width, (char*)base + (1 + j) * width)>0)
//			{
//				//����
//				swap((char*)base + j * width, (char*)base + (1 + j) * width,width);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ�ĺ���
//	return  *(int*)e1 - *(int*)e2;
//}
//void test5()
//{
//	int arr[10] = { 2,5,6,7,4,1,9,8,10,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//
//	Bubblesort(arr,sz,sizeof(arr[0]),cmp_int);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
////void test6()
////{
////	struct stu s[3] = { {"gbyiuh",20},{"fg67gfty",18},{"fd5fvtgy",45} };
////	int sz = sizeof(s) / sizeof(s[0]);
////	Bubblesort(s,sz,sizeof(s[0]),);
////}
//
//
//int main()
//{
//	test5();
//
//	return 0;
//}








































































































