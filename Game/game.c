#define _CRT_SECURE_NO_WARNINGS	1

#include "game.h";

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
/*
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印一行的数据 第i行的三个数据
		printf(" %c | %c | %c \n",board[i][0], board[i][1],board[i][2]);
		//打印分割行
		if(i<row-1)
			printf("---|---|---\n");
	}
}
*/
void DisPlayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//打印一行的数据 第i行的三个数据
			printf(" %c ", board[i][j]);
			if (j < col - 1)  //第三列不打印
				printf("|");
		}
		printf("\n");
		//打印分割行
		if (i < row - 1)  //第三行就不打印分割行了  控制行
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)   //控制列
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("请玩家落子:>");
	while (1)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 || y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ') //判断玩家输入的坐标的真实位置有没有元素
			{
				board[x - 1][y - 1] = '*'; 
				break;
			}
			else
			{
				printf("坐标已被占用，请玩家重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请玩家重新输入！\n");
		}
	}
}

void AiMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("对方落子，请玩家等待\n");

	while (1) //电脑生成的坐标必须没有被玩家占用 所以也是循环
	{
		x = rand() % row;  //随机生成的数字取模 余数就为0 1 2
		y = rand() % col;
		if (board[x][y] == ' ') //判断玩家输入的坐标的真实位置有没有元素
		{
			board[x][y] = '#';
			break;
		}
	}
}

//判断棋盘是否为满(数组已满)
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}


char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//横三行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board [i][1];
		}
	}
	//竖三列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//两条对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断棋盘是否为满 满了则是平局
	if (1 == IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
