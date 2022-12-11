#define _CRT_SECURE_NO_WARNINGS

//1.实现背景
//2.实现飘舞的雪花
//       1）最简单的雪花
//       2)爬虫似的雪花
//       3）曲线走位的雪花      
// 
//3.实现心形的雪花
//4.背景音乐
//5.添加字幕



#include<graphics.h>
//#include<Windows.h>
#include<stdio.h>
#include "tools .h"
#include"vector2.h"
#include<time.h>
#include<mmsystem.h>
#pragma comment(lib,"winmm.lib")

#define SNOW_COUNT_MAX 200

struct snow
{
	vector2 startPoint;
	vector2 endPoint;
	vector2 p1;
	vector2 p2;
	float t;
	vector2 curPos;
	bool visible;
	bool isHeart;
	bool hearted;
	int heartTime;
};


struct snow snows[SNOW_COUNT_MAX];

const char* biaobai[] = 
{
	"天空中银白的雪花",
	"圣诞树五彩的荧光",
	"你却是那最美的光",
	"gbuyhbi",
	"圣诞节快乐",
};

int heartPoints[][2] = {
	1007,180,
	981,164,
	959,151,
	938,138,
	919,133,
	904,128,
	892,128,
	877,128,
	861,130,
	837,138,
	818,147,
	806,158,
	794,170,
	782,186,
	775,200,
	770,219,
	767,236,
	763,259,
	764,277,
	768,301,
	773,321,
	782,342,
	792,359,
	806,376,
	820,392,
	834,407,
	850,419,
	867,431,
	880,443,
	897,454,
	914,464,
	931,474,
	946,485,
	964,495,
	979,505,
	1002,515,
	1022,507,
	1042,496,
	1058,488,
	1076,478,
	1093,468,
	1112,456,
	1131,442,
	1148,429,
	1167,415,
	1188,398,
	1204,377,
	1219,358,
	1231,336,
	1241,309,
	1245,282,
	1247,254,
	1244,231,
	1237,205,
	1227,185,
	1210,164,
	1190,149,
	1166,136,
	1142,130,
	1118,129,
	1094,132,
	1074,137,
	1054,147,
	1039,157,
	1024,169
};

void initSnow(struct snow* snow)
{
	snow->startPoint = vector2(rand() % 1400, -40);
	snow->endPoint = vector2(rand() % 1400, 850);
	snow->p1 = vector2(snow->startPoint.x - rand() / 200 + 200, rand() % 200 + 200);
	snow->p2 = vector2(snow->endPoint.x + rand() / 200 + 200, 600 + rand() % 100);
	snow->t = 0;
	snow->visible = false;
	snow->isHeart = false;
	snow->hearted = false;
	snow->heartTime = 0;
}


void initSnow2(struct snow* snow)
{
	snow->startPoint = snow->endPoint;
	snow->endPoint = vector2(rand() % 1400, 850);
	snow->p1 = vector2(snow->startPoint.x - rand() / 200 - 200, rand() % 200 + 200);
	snow->p2 = vector2(snow->endPoint.x + rand() / 200 + 200, 600 + rand() % 100);
	snow->t = 0;
	snow->heartTime = 50;
	snow->hearted = true;
}


void calcSnowPos()
{
	for (int i = 0; i < SNOW_COUNT_MAX; i++)
	{
		if (snows[i].visible)
		{
			if (snows[i].hearted)
			{
				snows[i].heartTime--;
				if (snows[i].heartTime == 0)
				{
					snows[i].hearted = false;
					snows[i].isHeart = false;
				}
				continue;
			}
			if (snows[i].isHeart)
			{
				snows[i].t += 0.01;
			}
			else
			{
				snows[i].t = ((rand() % 3) + 1) / 1000.0;
			}
			snows[i].curPos = calcBezierPoint(
				snows[i].t, snows[i].startPoint,
				snows[i].p1, snows[i].p2, snows[i].endPoint);
			if (snows[i].t >= 1)
			{
				if (snows[i].isHeart)
				{
					for (int k = 0; k < SNOW_COUNT_MAX; k++)
					{
						if (snows[k].isHeart)
						{
							initSnow2(&snows[k]);
						}
					}
					return;
				}
				else
				{
					initSnow(&snows[i]);
				}
			}
		}
	}
}


int createSnow()
{
	for (int i = 0; i < SNOW_COUNT_MAX; i++)
	{
		if (snows[i].visible == false)
		{
			snows[i].visible = true;
			return i;
		}
	}
}

void biaobaiShow()
{
	int x = 710, y = 120;
	int lineHeight = 65;
	static int lineIndex = -3;
	

	for (int i = 0; i <= lineIndex; i++)
	{
		outtextxy(x, y, biaobai[i]);
		y += lineHeight;
	}

	static int count = 0;
	if (count++ >= 60)
	{
		count = 0;
		lineIndex++;
		if (lineIndex >= sizeof(biaobai) / sizeof(biaobai[0]))
		{
			lineIndex = -1;
		}
	}
}

void creatHeartSnow()
{
	int count = sizeof(heartPoints) / sizeof(heartPoints[0]);
	for (int i = 0; i < count; i++)
	{
		int k = createSnow();
		initSnow(&snows[k]);
		snows[k].endPoint = vector2(heartPoints[i]);
		snows[k].isHeart = true;
		snows[k].visible = true;
	}
}


void test()
{
	IMAGE imgSnow;
	loadimage(&imgSnow, "res/snow.png");
	for (int i = 0; i < 65; i++)
	{
		putimage(heartPoints[i][0], heartPoints[i][1], &imgSnow);
	}
	system("pause");
}


int main(void)
{
	initgraph(1400, 800);
	IMAGE imgSnow, imgBg;
	srand(time(0));
	setbkmode(TRANSPARENT);


	setcolor(YELLOW);
	settextstyle(40, 0, "楷体");

	mciSendString("play res/bg.mp3 repeat", 0, 0, 0);

	loadimage(&imgSnow, "res/snow3.png");
	loadimage(&imgBg, "res/bg.png", 1400, 800, true);
	for (int i = 0; i < SNOW_COUNT_MAX; i++)
	{
		initSnow(&snows[i]);
	}
	int count = 0;
	int heartCount = 0;

	while (1)
	{
		calcSnowPos();

		BeginBatchDraw();
		putimage(0, 0, &imgBg);
		for (int i = 0; i < SNOW_COUNT_MAX; i++)
		{
			if (snows[i].visible)
			{
				putimagePNG2(snows[i].curPos.x, snows[i].curPos.y, 1400, 800, &imgSnow);
			}
		}
		biaobaiShow();

		EndBatchDraw();

		if (count++ > 10)
		{
			count = 0;
			createSnow();
		}

		if (heartCount++ > 550);
		{
			heartCount = 0;
			creatHeartSnow();
		}

		Sleep(60);
	}
	return 0;
}
















