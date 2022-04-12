#define _CRT_SECURE_NO_WARNINGS	1


//������������Ϸ
#include "game.h";

void menu()
{
	printf("***********************\n");
	printf("*** 1.play   0.exit ***\n");
	printf("***********************\n");
}

//��Ϸʵ��
void game()
{
	int ret = 0;
	//����-����߳���������Ϣ
	char board[ROW][COL] = {0};
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisPlayBoard(board, ROW, COL);
	//����
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisPlayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
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
		printf("���ʤ����\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ����\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //ʱ������������ ֻ��Ҫ��ȥһ�� ���Է�������
	//time���ͷ��ص���time_t���� ǿת
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ���������������ѡ��\n");
				break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}
