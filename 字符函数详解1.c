#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//   strtok   --  ����

//int main()
//{
//	//192.168.31.121
//	//zpw@bitedu.tech 
//	//zpw  bitedu  tech  --- �ֿ��õ�  --- strtok
//	//   char* strtok��char*str �� const char*sep��
//	//sep  ---�� �ָ���
//	char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";
//	//strtok(arr, p);
//	char buf[1024] = {0};
//	//��ӡһ���ַ�������strtok�ڲ����ַ���ʱ��ı��ַ���
//	strcpy(buf, arr);
//	//�����и�
//	char* ret = strtok(arr, p);
//	//����--���ҵ�@����@�ĳ�"\0" ������Ԫ�ص�ַ
//	printf("%s\n", ret);
//
//	//�и�ڶ���
//	ret = strtok(NULL, p);
//	//����������ס��һ�ν�����λ��
//	
//
//	//��"."�ҵ����ĳ�"\0" ---�� ����"b"�ĵ�ַ
//
//	printf("%s\n", ret);
//
//	//�õ�����
//	ret = strtok(NULL, p);
//	//�������һᷢ���Ҳ�������ı����---��ֱ�ӷ���"t"�ĵ�ַ
//	printf("%s\n", ret);
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "zpw@bitdu.tech";
//	char* p = "@.";
//	char* buf[1024] = { 0 };
//	//����һ���ַ���
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
//	//ip��ַ�ı�ʾ---�����ʮ���Ƶı�ʾ����
//
//	char* p = ".";
//	char* buf[1024] = { 0 };
//	//����һ���ַ���
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
////errno  ---> ��һ��ȫ�ֵĴ�����ı���
////��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//int main()
//{
//	//������ --- ����Ӧһ��������Ϣ
//	//0  -  No error
//	//1  -  Operation not permitted
//	//2  -  No such file or directory
//	//.....
//
//	//char* str = strerror(2);//�����ǵĴ�����ת����һ��������Ϣ---���ص�ַ
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE*pf= fopen("����1.c", "r");
//	//fopen���ļ�
//	//���fopen���ļ������������һ��FILE*������һ��ָ��
//
//	if (pf == NULL)//fopen  --->  ��ʧ�ܷ��ؿ�ָ��
//	{
//		printf("%s\n", strerror(errno));//Ѱ�Ҵ��ļ�ʧ�ܵ�ԭ��
//	}
//	else//��ΪNULL ���ļ��ɹ�
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
//	////�ж��ַ�ch�Ƿ�ΪСд��ĸ--����Сд��ĸ���ش���0�����ӣ�����Сд��ĸ���ص���0������
//	//printf("%d\n", ret);
//
//
//
//	//char ch = tolower('Q');//����д��ĸת����Сд��ĸ
//	//char ch1 = toupper('q');//��Сд��ĸת���ɴ�д��ĸ
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











































