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
//    printf("请输入两个操作数:>");
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
//        printf("请选择:>");
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
//            printf("退出\n");
//            break;
//        default:
//            printf("选择错误\n");
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



//指向函数指针数组的指针

//int main()
//{
//	int(*pfArr[4])(int, int);//pfArr是一个数组--函数指针的数组
//
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//
//	//ppfArr是一个数组指针---指向的数组有4个元素
//	//指向的数组的每一个元素类型是函数指针  int(*)(int,int)
//
//
//	return 0;
//}


//回调函数

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
	//冒泡排序函数
	//冒泡排序函数只能排序整形数组

	//qsort---c语言提供的一个库函数---可以排序任意类型的数据

	int arr[] = { 2,3,4,1,6,5,8,7,10,9 };
	int sz = sizeof(arr) / sizeof(arr[0]); 
	Bubblesort(arr, sz);


	return 0;
}

















































