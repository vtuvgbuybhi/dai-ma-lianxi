#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//
//	unsigned int j = 10; 
//	//00000000000000000000000000001010
//
//	printf("%d\n", i + j);
//	//11111111111111111111111111101100-补码
//	//00000000000000000000000000001010-补码
//	//11111111111111111111111111110110-结果
//
//	return 0;
//}


//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	//10000000 00000000 00000000 00001001
//
//	return 0;
//}



//int main()
//{
//	char a[1000];
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	int count = 0;
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//浮点数在内存中的存储
//9.0
//9.0的二进制1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s *M  *2^E
//s--0     正数--0   负数--1
//M--1.001 --  有效位  （大于等于1  小于2）
//E--3      指数位


//对于32位的浮点数，最高的一位是符号位s   接着的8位是指数位E  剩下的23位是有效位M


//int main()
//{
//	float f = 5.5;
//	//5.5
//	//二进制101.1
//	//(-1)^0* 1.011 * 2^2
//	//s=0
//	//M=1.011
//	//E=2
//	//S    E=127+2   M
//	//0    10000001  0110000000000000000000--二进制
//
//	//0100 0000 1011 0000 0000 0000 0000 0000
//	// 0x40 b0 00 00--十六进制
//
//
//	return 0;
//}




//int main()
//{
//	int n = 9;
//     // 0000 0000 0000 0000 0000 0000 0000 1001
//    
//     //0 00000000 00000000000000000001001
//
//	float* pFloat = (float*)&n;
//	printf("n的值为:%d\n", n);
//	printf("*pFloat的值为:%f\n", *pFloat);
// // (-1) * 0.00000000000000000001001* 2^(-126)
//
//
//	*pFloat = 9.0;
//	//1001.0
//	// (-1)^0 * 1.001  *  2^3
//	//0 10000010 0010000000000000000000
//
//	printf("num的值为:%d\n", n);
//
//	printf("pFloat的值为:%f\n", *pFloat);
//
//
//}











































