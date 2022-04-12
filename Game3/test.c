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
	//��������
	char mine[ROWS][COLS] = { 0 };
	//��ʾ������
	char show[ROWS][COLS] = { 0 };
	//��ʼ��
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//9*9�ﲼ����
	SetMine(mine, ROW, COL);
	//��ӡ����
	//displayboard(mine, ROW, COL);
	//printf("\n");
	displayboard(show, ROW, COL);
	//����
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
			printf("������Ҫ�Ų������:>\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�����������������:\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}