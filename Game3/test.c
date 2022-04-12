#include "game.h"

void menu()
{
	printf("********************************\n");
	printf("********      1.play   *********\n");
	printf("********      0.exit   *********\n");
	printf("********************************\n");
}

void game()
{
	//埋雷棋盘
	char mine[ROWS][COLS] = { 0 };
	//显示的棋盘
	char show[ROWS][COLS] = { 0 };
	//初始化
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//9*9里布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	//displayboard(mine, ROW, COL);
	//printf("\n");
	displayboard(show, ROW, COL);
	//排雷
	FindMine(mine, show, ROW, COL);
}

void test()
{
	menu();
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入要排查的坐标:>\n");
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入:\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}