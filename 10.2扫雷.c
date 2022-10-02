#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 9
#define COL 9
#define ROWS 11
#define COLS 11
#define EASY_COUNT 10
#include<stdlib.h>
#include<time.h>
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			Board[i][j] = set ;
		}
	}
}
void DisplayBoard(char Board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ",i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", Board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char Board[ROWS][COLS], int row, int col)
{
	int count =EASY_COUNT;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand() % col + 1;
		if (Board[x][y] == '0')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}
int getmine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x + 1][y] +
		mine[x - 1][y + 1] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x][y - 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y - 1] - 8 * '0';
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入排查雷的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("被炸死了\n");
				DisplayBoard(mine,row,col);
				break;
			}
			else
			{
				int count = getmine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("请输入合法坐标>>\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("游戏成功了");
	}
}
void menu()
{
	printf("************************\n");
	printf("*****1.play*************\n");
	printf("*****0.exit*************\n");
	printf("************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	Setmine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	Findmine(mine, show, ROW, COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


























