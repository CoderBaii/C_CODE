#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//����
void InitBoard(char board[ROW][COL],int row,int col); //�β�Сд
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void AiMove(char board[ROW][COL], int row, int col);

/*
���Ӯ "*"
����Ӯ "#"
ƽ��  "Q"
����  "C"
*/
char IsWin(char board[ROW][COL], int row, int col);