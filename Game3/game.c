#include "game.h"

//�������飬��ʼ������
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

//��ӡ����
void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	//��ӡ�к�
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		//��ӡ���̱���
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//���������
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
			count--; //ѭ������
		}
	}
}

//���������������Χ8�������Ƿ�����
//�������������ַ�����ȥ8���ַ��㣬�ͱ��������
int Count(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] +
		board[x - 1][y + 1] + board[x][y - 1] +
		board[x][y + 1] + board[x + 1][y - 1] +
		board[x + 1][y] + board[x + 1][y + 1] - 8 * '0';
}

//�ݹ麯�� ����˸����궼û���� ������һƬ������һ�������8�������ж�
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

//����
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
				printf("��ϲ����ը���ˣ�\n");
				displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int ret = Count(mine, x, y);
				show[x][y] = ret + '0';
				OpenMine(mine, show, x, y); //���õݹ�
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("�����������������:>\n");
		}
	}
}
