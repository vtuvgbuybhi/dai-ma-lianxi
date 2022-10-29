#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//两段有趣的代码
//1.（*（void（*)())0）（）;
//(void(*)())---函数指针类型
//（）0将0强制转换类型--转换成void（*）（）函数指针类型---0就是一个函数地址
//调用0地址处的函数地址




//2.void(*signal(int,void(*)(int)))(int);
//signal是一个函数申明
//siganl函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数的参数是int，返回类型是void
//signal返回类型也是一个函数指针，该函数指针指向的函数的参数是int，返回类型是void



//       pa=signal(int,void(*)(int))---pa是函数返回值
//void(*    pa       )(int)--最终这个函数的返回类型是函数指针



//void(*signal(int,void(*)(int)))(int);简化

// typedef --  关键字  --将某些类型简单些
             //         （无符号整形）
//typedef用法----typedef unsigned int uint   --将无符号整形简单的表示成uint 这样uint就代表了无符号整形

//对指针函数typedef用法   typedef void(*)(int)  pfun_t;----对函数指针这种写法是错误的
//正确的是--------        typedef void(*pfun_t)(int);----这是正确的写法对函数指针的简单表示---这样pfun_t就代表了void(*)(int)这样子的函数指针类型

//typedef void(*pfun_t)(int);
//pfun_t singnal(int pfun_t);这个简化后的写法



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
//    //*不起作用
//
//    return 0;
//}


//函数指针数组
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
//    int* arr[5];//数组指针
//
//    //需要一个数组，这个数组可以存放4个函数的地址
//    int(*pa)(int, int) = Add;//函数指针//Sub/Mul/Div
//
//    //int(*pa[4])(int, int);//函数指针的数组
//    //pa[4]--这是一个数组可以存放4个元素
//    //int(* )(int,int)//每一个元素是函数指针类型
//
//    int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组
//    int i = 0;
//    for (i = 0; i < 4; i++)
//    {
//        printf("%d \n", parr[i](2, 3));
//    }
//    return 0;
//}


//char* my_strcpy(char* dest, const char* src);

//1.写一个函数指针pf，能够指向my_strcpy
//2.写一个函数指针数组pfArr，能够存放4个my_strcpy

//1---   char*(*pf)(char*,const char* );

//2---   char*(*pfArr[4])(char*,const char*);


//函数指针数组用途

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
//        printf("请选择:>");
//        scanf("%d", &input);
//        if (input >= 1 && input <= 4)
//        {
//            printf("请输入两个操作数:>");
//            scanf("%d %d", &x, &y);
//            int ret = pfArr[input](x,y);
//            printf("%d\n", ret);
//        }
//        else if (input == 0)
//        {
//            printf("退出\n");
//        }
//        else
//            printf("选择错误\n");
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
//        printf("请选择:>");
//        scanf("%d", &input);
//        switch (input)
//        {
//        case 1:
//            printf("请输入两个操作数:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n",Add(x,y));
//            break;
//        case 2:
//            printf("请输入两个操作数:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Sub(x, y));
//            break;
//        case 3:
//            printf("请输入两个操作数:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Mul(x, y));
//            break;
//        case 4:
//            printf("请输入两个操作数:>");
//            scanf("%d %d", &x, &y);
//            printf("%d\n", Div(x, y));
//            break;
//        case 0:
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}






























//char* my_strcpy(char* dest, const char* str)
//{}
//1.写一个函数指针 pf ，能够指向my_strcpy
//2.写一个函数指针数组 pfArr ，能够存放4个my_strcpy函数的地址
//int main()
//{
//	//1.char*(*pf)(char*, const char*);
//
//	//2.char*(*pfArr[4])(char*,const char*);
//
//	return 0;
//}







































































