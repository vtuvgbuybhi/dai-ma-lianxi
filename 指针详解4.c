#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//void menu()
//{
//    printf("**********************\n");
//    printf("**  1.add    2.sub  **\n");
//    printf("**  3.mul    4.div  **\n");
//    printf("*****  0.exit  *******\n");
//    printf("**********************\n");
//}
//int Add(int x, int y)
//{
//    return x + y;
//}
//
//int Sub(int x, int y)
//{
//    return x - y;
//}
//
//int Mul(int x, int y)
//{
//    return x * y;
//}
//
//int Div(int x, int y)
//{
//    return x / y;
//}
//
//void Calc(int(*pa)(int,int))
//{
//    int x, y;
//    printf("����������������:>");
//    scanf("%d %d", &x, &y);
//    printf("%d\n", pa(x, y));
//}
//
//
//int main()
//{
//    int input = 0;
//    int x, y;
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            Calc(Add);
//            break;
//        case 2:
//            Calc(Sub);
//            break;
//        case 3:
//            Calc(Mul);
//            break;
//        case 4:
//            Calc(Div);
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}



//int main()
//{
//    int input = 0;
//    int x, y;
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("����������������:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n",Add(x,y));
//            break;
//        case 2:
//            printf("����������������:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("����������������:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("����������������:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 0:
//            printf("�˳�\n");
//            break;
//        default:
//            printf("ѡ�����\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}



//ָ����ָ�������ָ��

//int main()
//{
//	int(*pfArr[4])(int, int);//pfArr��һ������--����ָ�������
//
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr��һ������ָ��---ָ���������4��Ԫ��
//	//ָ��������ÿһ��Ԫ�������Ǻ���ָ��  int(*)(int,int)
//
//
//	return 0;
//}


//�ص�����

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void(*pa)(char*))
//{
//	printf("test\n");
//	pa("bit");
//}
//
//
//int main()
//{
//	test(print);
//	return 0;
//}


int main()
{
	//ð��������
	//ð��������ֻ��������������

	//qsort---c�����ṩ��һ���⺯��---���������������͵�����

	int arr[] = { 2,3,4,1,6,5,8,7,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]); 
	Bubblesort(arr, sz);


	return 0;
}

















































