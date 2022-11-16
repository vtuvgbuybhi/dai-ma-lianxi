#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//   strtok   --  函数

//int main()
//{
//	//192.168.31.121
//	//zpw@bitedu.tech 
//	//zpw  bitedu  tech  --- 分开拿到  --- strtok
//	//   char* strtok（char*str ， const char*sep）
//	//sep  ---》 分隔符
//	char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";
//	//strtok(arr, p);
//	char buf[1024] = {0};
//	//复印一份字符串，在strtok在操作字符串时会改变字符串
//	strcpy(buf, arr);
//	//进行切割
//	char* ret = strtok(arr, p);
//	//首先--先找到@，将@改成"\0" 返回首元素地址
//	printf("%s\n", ret);
//
//	//切割第二段
//	ret = strtok(NULL, p);
//	//这个函数会记住上一次结束的位置
//	
//
//	//把"."找到，改成"\0" ---》 返回"b"的地址
//
//	printf("%s\n", ret);
//
//	//拿第三段
//	ret = strtok(NULL, p);
//	//再往后找会发现找不到更多的标记了---》直接返回"t"的地址
//	printf("%s\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";
//	char* buf[1024] = { 0 };
//	//拷贝一份字符串
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	//char arr[] = "zpw@bitdu.tech";
//	char arr[] = "192.168.31.121";
//	//ip地址的表示---》点分十进制的表示方法
//
//	char* p = ".";
//	char* buf[1024] = { 0 };
//	//拷贝一份字符串
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}


//  strerror --- 

//#include<errno.h>
////errno  ---> 是一个全局的错误码的变量
////当c语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//int main()
//{
//	//错误码 --- 》对应一个错误信息
//	//0  -  No error
//	//1  -  Operation not permitted
//	//2  -  No such file or directory
//	//.....
//
//	//char* str = strerror(2);//把我们的错误码转换成一个错误信息---返回地址
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE*pf= fopen("函数1.c", "r");
//	//fopen打开文件
//	//这个fopen打开文件这个函数返回一种FILE*的这样一种指针
//
//	if (pf == NULL)//fopen  --->  打开失败返回空指针
//	{
//		printf("%s\n", strerror(errno));//寻找打开文件失败的原因
//	}
//	else//不为NULL 打开文件成功
//	{
//		printf("open file successful\n");
//	}
//
//	return 0;
//}

//#include<ctype.h>
//
//int main()
//{
//	//char ch = "2";
//	//int ret = islower(ch);
//	////判断字符ch是否为小写字母--》是小写字母返回大于0的数子，不是小写字母返回等于0的数字
//	//printf("%d\n", ret);
//
//
//
//	//char ch = tolower('Q');//将大写字母转换成小写字母
//	//char ch1 = toupper('q');//将小写字母转换成大写字母
//	//putchar(ch);
//	//printf("\n");
//	//putchar(ch1);
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}











































