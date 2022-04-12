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
	//��ӡ�к� 
	for (i = 0; i <= col; i++) //<=
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i); //��ӡ�к�
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
		//��9x9�����������������
		int x = rand() % row + 1; //����Ϊ0-8 ��1��Ϊ1-9
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--; //ѭ������
		}
	}
}
//�������
/*�ݹ� �����Χ����û���׵���
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

//'1' - '0' = 1  �ַ�1��ȥ�ַ�0�õ���������1 ASCLL��ֵ�ļӼ�
//'0' - '0' = 0
int get_mine_count(char mine[ROWS][COLS], int x, int y)  //����x y������Χ�м�����
{
		return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8*'0';  //��ȥ8���ַ�0
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EAZY_COUNT) //9*9-10=71 ����λ
	{
		printf("���������Ų������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			//����Ϸ�
			//����
			if (mine[x][y] == '1')
			{
				printf("���ź�������ը���ˣ�\n");
				DisplayBoard(mine, row, col); //��ӡ9*9  ���洫������ʵ���к��� ����ֱ��ʹ��
				break;
			}
			else //������
			{
				//����x y������Χ�м�����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0'; //��countֵת�����ַ�
				//DisplayBoard(mine, row, col); //����������ĵط�-show
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ����������������Ų������:>\n");
		}
	}
	if (win == row * col - EAZY_COUNT)
	{
		printf("��ϲ�������׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}