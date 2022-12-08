#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//包含图形库提供给我们的头文件，就能使用提供给我们的函数了
#include<graphics.h>

//int main()
//{
//	//创建一个窗口，确定窗口的大小
//	initgraph(640, 480);
//	//画粑粑，圆
//	circle(50, 50, 50);
//	fillcircle(50, 150, 50);
//	solidcircle(50, 250, 50);
//	getchar();
//
//	//关闭窗口
//	closegraph();
//
//
//	return 0;
//}


//int main()
//{
//	//创建一个窗口，确定窗口的大小
//	initgraph(640, 480,SHOWCONSOLE);
//
//	//设置背景颜色
//	setbkcolor(WHITE);
//	cleardevice();//清屏
//
//	//设置线条样式  --》  setlinestyle(高度，宽度，字体)
//	setlinestyle(PS_SOLID, 5);
//
//	setfillcolor(YELLOW);//设置填充颜色
//	setlinecolor(BLUE);//设置线条颜色
//
//	circle(50, 50, 50);
//	fillcircle(50, 150, 50);
//	solidcircle(50, 250, 50);
//
//	int maye = 0;
//	scanf("%d", &maye);
//	printf("%d", maye);
//
//	getchar();
//
//	//关闭窗口
//	closegraph();
//
//
//	return 0;
//}

//int main()
//{
//	//创建一个窗口，确定窗口的大小
//	initgraph(640, 480, SHOWCONSOLE);
//
//	//设置背景颜色
//	setbkcolor(WHITE);
//	cleardevice();//清屏
//
//	//设置线条样式  --》  setlinestyle(高度，宽度，字体)
//	setlinestyle(PS_SOLID, 5);
//
//	setfillcolor(YELLOW);//设置填充颜色
//	setlinecolor(BLUE);//设置线条颜色
//
//	circle(50, 50, 50);
//	fillcircle(50, 150, 50);
//	solidcircle(50, 250, 50);
//
//	//绘制文字
//	//设置文字颜色
//	settextcolor(RED);
//
//	//参数错误，找不到对应的函数
//	//是由于字符集导致的，那么解决方案呢?
//
//	//1.在字符串前面加上大小的 L
//	//outtextxy(50, 50, L"谢谢大家");
//
//	//2.用TEXT()把字符串包起来
//	//outtextxy(50, 50, TEXT("谢谢大家"));
//
//	//3.不需要添加任何代码，进项目--》属性-》高级-》字符集-》改为多字节字符集
//	//outtextxy(50, 50, TEXT("谢谢大家"));
//
//	//设置文字样式，大小，字体
//	settextstyle(50, 0, "楷体");
//	//设置背景模式  -->trans  parent
//	setbkmode(TRANSPARENT);
//	outtextxy(50, 50, "谢谢大家");
//
//	getchar();
//
//	//关闭窗口
//	closegraph();
//
//
//	return 0;
//}












