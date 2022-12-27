#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//如何操作文件

#include<errno.h>
#include<string.h>
//int main()
//{
//	//打开文件  test.txt
//	//  .. 表示上一级路径
//	//fopen("../test.txt", "r");
//	//fopen("test.txt", "r");//相对路径的写法
//
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//文件的顺序读写

//int main()
//{
//	FILE* pfWrite = fopen("test.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	//写文件
//	fputc('b', pfWrite);
//	fputc('i', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}


//int main()
//{
//	FILE* pfRead = fopen("test.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//
//	return 0;
//}


//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘 -- 标准输入设备   ---stdin
//屏幕  --  标准输出设备  --- stdout
//是一个程序默认打开的两个流设备


//stdin
//stdout
//stderr

//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//	return 0;
//}


//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fgets(buf, 1024, pf);
//	printf("%s", buf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//int main()
//{
//	//从键盘读取一行文本信息
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//从标准输入读取
//	fputs(buf, stdout);//输出到标准输出流
//	
//	return 0;
//}


struct S
{
	int n;
	float score;
	char arr[10];
};

int main()
{
	struct S s = { 100,3.14f,"bit" };
	FILE* pf = fopen("test.txt", "w");

	if (pf == NULL)
	{
		return 0;
	}
	//格式化的写文件


	return 0;
}





























































