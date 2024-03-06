#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 5
#define COL 5
void InitBoard(char board[ROW][COL],int row,int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row,int col);
int Full(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);

