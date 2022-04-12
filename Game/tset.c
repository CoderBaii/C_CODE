#define _CRT_SECURE_NO_WARNINGS	1


//测试三子棋游戏
#include "game.h";

void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}

//游戏实现
void game()
{
	int ret = 0;
	//数组-存放走出的棋盘信息
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisPlayBoard(board, ROW, COL);
	//下棋
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		AiMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家胜利！\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜利！\n");
	}
	else
	{
		printf("平局！\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //时间戳生成随机数 只需要进去一次 所以放在外面
	//time类型返回的是time_t类型 强转
	do
	{
		menu();
		printf("请做出你的选择:>");
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
				printf("选择错误，请重新做出选择\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
