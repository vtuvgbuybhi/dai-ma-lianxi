#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//定位文件指针
//	fseek(pf, 2, SEEK_CUR);
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//	//读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	rewind(pf);//让文件指针回到起始位置
//
//	int ch1 = fgetc(pf);
//	printf("%c\n", ch1);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1  文件结束的位置放了一个   EOF = -1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;   //  0-3
//	char b;  //4
//	//5
//	short c;// 6-7
//	short d;//  8-9
//}AA_t;
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}



















