#include "game.h"

//遍历数组，初始化棋盘
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//打印行号
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		//打印棋盘本身
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//随机生成雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EAZY;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--; //循环出口
		}
	}
}

//遍历输入的坐标周围8个坐标是否有雷
//遍历出来的是字符，减去8个字符零，就变成了整型
int Count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] +
		board[x - 1][y + 1] + board[x][y - 1] +
		board[x][y + 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

//递归函数 如果八个坐标都没有雷 点亮这一片再以另一个坐标的8个坐标判断
void OpenMine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	if (x >= 1 && y <= ROW && y >= 1 && x <= COL)
	{
		int ret = Count(mine, x, y);
		if (ret == 0)
		{
			show[x][y] = ' ';
			if (x - 1 > 0 && y - 1 > 0 && mine[x - 1][y - 1] == '0')
			{
				OpenMine(mine, show, x - 1, y - 1);
			}
			else if ((x - 1) > 0 && y > 0 && mine[x - 1][y] == '0')
			{
				OpenMine(mine, show, x - 1, y);
			}
			else if ((x - 1) > 0 && (y + 1) <= COL && mine[x - 1][y + 1] == '0')
			{
				OpenMine(mine, show, x - 1, y + 1);
			}
			else if (x > 0 && (y - 1) > 0 && mine[x][y - 1] == '0')
			{
				OpenMine(mine, show, x, y - 1);
			}
			else if (x > 0 && (y + 1) <= COL && mine[x][y + 1] == '0')
			{
				OpenMine(mine, show, x, y + 1);
			}
			else if ((x + 1) <= ROW && (y - 1) > 0 && mine[x + 1][y - 1] == '0')
			{
				OpenMine(mine, show, x + 1, y - 1);
			}
			else if ((x + 1) <= ROW && y > 0 && mine[x + 1][y] == '0')
			{
				OpenMine(mine, show, x + 1, y);
			}
			else if ((x + 1) <= ROW && (y + 1) <= COL && mine[x + 1][y + 1] == '0')
			{
				OpenMine(mine, show, x + 1, y + 1);
			}
		}
		else
		{
			show[x][y] = ret + '0';
		}
	}
}

//排雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - EAZY)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("恭喜您被炸死了！\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = Count(mine, x, y);
				show[x][y] = ret + '0';
				OpenMine(mine, show, x, y); //调用递归
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标错误，请重新输入:>\n");
		}
	}
}
