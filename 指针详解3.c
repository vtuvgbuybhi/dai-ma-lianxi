#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//������Ȥ�Ĵ���
//1.��*��void��*)())0������;
//(void(*)())---����ָ������
//����0��0ǿ��ת������--ת����void��*����������ָ������---0����һ��������ַ
//����0��ַ���ĺ�����ַ




//2.void(*signal(int,void(*)(int)))(int);
//signal��һ����������
//siganl�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//signal��������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void



//       pa=signal(int,void(*)(int))---pa�Ǻ�������ֵ
//void(*    pa       )(int)--������������ķ��������Ǻ���ָ��



//void(*signal(int,void(*)(int)))(int);��

// typedef --  �ؼ���  --��ĳЩ���ͼ�Щ
             //         ���޷������Σ�
//typedef�÷�----typedef unsigned int uint   --���޷������μ򵥵ı�ʾ��uint ����uint�ʹ������޷�������

//��ָ�뺯��typedef�÷�   typedef void(*)(int)  pfun_t;----�Ժ���ָ������д���Ǵ����
//��ȷ����--------        typedef void(*pfun_t)(int);----������ȷ��д���Ժ���ָ��ļ򵥱�ʾ---����pfun_t�ʹ�����void(*)(int)�����ӵĺ���ָ������

//typedef void(*pfun_t)(int);
//pfun_t singnal(int pfun_t);����򻯺��д��



//int Add(int x, int y)
//{
//    return x + y;
//}
//
//
//int main()
//{
//    int a = 10;
//    int b  = 30;
//    int(*pa)(int, int) = Add;
//
//    printf("%d \n", (pa)(a, b));
//
//    printf("%d \n", (**pa)(a, b));
//
//    printf("%d \n", (***pa)(a, b));
//    //*��������
//
//    return 0;
//}


//����ָ������
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
//int main()
//{
//    int* arr[5];//����ָ��
//
//    //��Ҫһ�����飬���������Դ��4�������ĵ�ַ
//    int(*pa)(int, int) = Add;//����ָ��//Sub/Mul/Div
//
//    //int(*pa[4])(int, int);//����ָ�������
//    //pa[4]--����һ��������Դ��4��Ԫ��
//    //int(* )(int,int)//ÿһ��Ԫ���Ǻ���ָ������
//
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ������
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d \n", parr[i](2, 3));
//    }
//    return 0;
//}


//char* my_strcpy(char* dest, const char* src);

//1.дһ������ָ��pf���ܹ�ָ��my_strcpy
//2.дһ������ָ������pfArr���ܹ����4��my_strcpy

//1---   char*(*pf)(char*,const char* );

//2---   char*(*pfArr[4])(char*,const char*);


//����ָ��������;

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
//int main()
//{
//    int input = 0;
//    int x, y;
//    int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };
//    do
//    {
//        menu();
//        printf("��ѡ��:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)
//        {
//            printf("����������������:>");
//            scanf("%d %d", &x, &y);
//            int ret = pfArr[input](x,y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("�˳�\n");
//        }
//        else
//            printf("ѡ�����\n");
//
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






























//char* my_strcpy(char* dest, const char* str)
//{}
//1.дһ������ָ�� pf ���ܹ�ָ��my_strcpy
//2.дһ������ָ������ pfArr ���ܹ����4��my_strcpy�����ĵ�ַ
//int main()
//{
//	//1.char*(*pf)(char*, const char*);
//
//	//2.char*(*pfArr[4])(char*,const char*);
//
//	return 0;
//}







































































