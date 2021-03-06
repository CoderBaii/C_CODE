#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3

//声明
void InitBoard(char board[ROW][COL],int row,int col); //形参小写
void DisPlayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL],int row,int col);
void AiMove(char board[ROW][COL], int row, int col);

/*
玩家赢 "*"
电脑赢 "#"
平局  "Q"
继续  "C"
*/
char IsWin(char board[ROW][COL], int row, int col);