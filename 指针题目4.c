#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//Ҫ������ṹ��a�����ݣ������������
//struct S
//{
//	int a;
//	int b;
//};
//
//int main()
//{
//	struct S a, * p = &a;
//	//a�Ǵ�����һ���ṹ�����
//	//*p ��һ���ṹ��ָ�� ָ����ǳ�Ա��a
//
//	a.a = 99;
//	//��һ��a�ǽṹ�����
//	//�ڶ���a�ǽṹ���Ա��
//
//	printf("%d\n", );
//	return 0;
//}
//A--a.a

//B--*P.a
//����ǲ����Ե�---��Ϊ . �����ȼ��Ǹ���*��

//C--p->a

//D--(*p).a



//struct s
//{
//
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct s *p)//�ýṹ��ָ����н���
//{
//	printf("%s\n", (*p).name);//��ӡ�����ľ���chen
//	return 0;
//}
//
//int main()
//{
//	struct s students[3] = { {555,"zheng",20},
//	                        {666,"chen",23},
//		                    {777,"wang",56} };
//
//	fun(students + 1);
//	����ȥ�Ľṹ�����Ԫ�ص�ַ---Ҳ����{555��"zheng"��20}�����Ԫ�صĵ�ַ
//	+1Ҳ����ָ������һ��Ԫ�صĵ�ַ
//
//
//	return 0;
//
//}


//����ˮ����---- һƿ��ˮ1��Ǯ  2����ƿ�ӿ��Ի�һƿ��ˮ   �ʹ���20Ԫ�����Ժȶ���ƿ��ˮ

//int main()
//{
//	int money = 0;
//	int total = 0;
//	int empty = 0;
//	scanf("%d", &money);

	//if (money == 0)
	//{
	//	total = 0;
	//}
	//else
	//{
	//	total = 2 * money - 1;
	//}


	//���������ˮ�ȵ�
	//total = money;
	//empty = money;
	////����������ˮ
	//while (empty >= 2)
	//{
	//	total += empty / 2;
	//	empty = empty / 2 + empty % 2;
	//}
//	printf("%d ", total);
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hello\n");
//	}
//	//system("pause");
//	return 0;
//}

//�ڴ�ռ���ջ����Ĭ��ʹ�ã�
//��ʹ�øߵ�ַ���Ŀռ�     ��ʹ�õ͵�ַ���Ŀռ�
//���������±������  ��ַ���ɵ͵��߱仯��

    //        ����           ����
//�ڴ� -------�ߵ�ַ--------���͵�ַ


//������ѭ����ԭ��
//main���������������ֲ��������������ֲ��������Ǵ����ջ���ģ���ջ�ռ��ʹ��ϰ����ʹ�øߵ�ַ���Ŀռ�     ��ʹ�õ͵�ַ���Ŀռ�
//��iһ����arr���洴�� �� �����������±������  ��ַ���ɵ͵��߱仯�ģ���������Խ��������п��ܸı�iֵ�������



//ʵ��һ������ʵ��һ�������ǰ�벿������������벿����ż��

//�������ż��
//�ұ�������
//�����ǽ���

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//
//void move(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	//�������ż��
//	while (left < right)
//	{
//		while ((left<right) && (arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//�ұ�������
//		while ((left<right) && (arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	printf("gyuih");
//	return 0;
//}




























