#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for(i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//打印列号 
	for (i = 0; i <= col; i++) //<=
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); //打印行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EAZY_COUNT;

	while (count)
	{
		//在9x9的棋盘里随机生成雷
		int x = rand() % row + 1; //余数为0-8 加1后为1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--; //循坏出口
		}
	}
}
//错误代码
/*递归 如果周围坐标没有雷点亮
int Remove(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int ret;
	ret = get_mine_count(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = '*';
		if ((x - 1) > 0 && (y - 1) > 0 && (show[x - 1][y - 1] == '0'))
			Remove(mine, show, x - 1, y - 1);
		if ((x - 1) > 0 && (y) > 0 && (show[x - 1][y] == '0'))
			Remove(mine, show, x - 1, y);
		if ((x - 1) > 0 && (y + 1) > 0 && (show[x - 1][y + 1] == '0'))
			Remove(mine, show, x - 1, y + 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '0'))
			Remove(mine, show, x, y - 1);
		if ((x) > 0 && (y - 1) > 0 && (show[x][y - 1] == '0'))
			Remove(mine, show, x, y - 1);
		if ((x) > 0 && (y + 1) > 0 && (show[x][y + 1] == '0'))
			Remove(mine, show, x, y + 1);
		if ((x + 1) > 0 && (y - 1) > 0 && (show[x + 1][y - 1] == '0'))
			Remove(mine, show, x + 1, y - 1);
		if ((x + 1) > 0 && (y) > 0 && (show[x + 1][y] == '0'))
			Remove(mine, show, x + 1, y);
		if ((x + 1) > 0 && (y + 1) > 0 && (show[x + 1][y + 1] == '0'))
			Remove(mine, show, x + 1, y + 1);
	}
	else
		show[x][y] = ret - '0';
}
*/

//'1' - '0' = 1  字符1减去字符0得到的是数字1 ASCLL码值的加减
//'0' - '0' = 0
int get_mine_count(char mine[ROWS][COLS], int x, int y)  //计算x y坐标周围有几个雷
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8*'0';  //减去8个字符0
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EAZY_COUNT) //9*9-10=71 个空位
	{
		printf("请您输入排查的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//坐标合法
			//踩雷
			if (mine[x][y] == '1')
			{
				printf("很遗憾，您被炸死了！\n");
				DisplayBoard(mine, row, col); //打印9*9  上面传过来真实的行和列 可以直接使用
				break;
			}
			else //不是雷
			{
				//计算x y坐标周围有几个雷
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0'; //将count值转换成字符
				//DisplayBoard(mine, row, col); //！！！错误的地方-show
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标不合法，请您重新输入排查的坐标:>\n");
		}
	}
	if (win == row * col - EAZY_COUNT)
	{
		printf("恭喜您，排雷成功！\n");
		DisplayBoard(mine, row, col);
	}
}