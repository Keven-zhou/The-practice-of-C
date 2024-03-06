#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void InitBoard(char board[ROW][COL], int row, int col) {

	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}

}

void Displayboard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i = 0;i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void playerMove(char board[ROW][COL], int row, int col) {

	int x = 0;
	int y = 0;
	printf("玩家下棋\n");
	while (1) {
		printf("请输入坐标，中间使用空格：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] ==' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标已被占用,请重新输入\n");
			}
		}
		else {
			printf("坐标非法，重新输入\n");
		}

	}

}

void ComputerMove(char board[ROW][COL], int row, int col) {

	int x = 0;
	int y = 0;
	printf("电脑下棋\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}

int Full(char board[ROW][COL], int row, int col) {

	int i = 0;
	for (i = 0; i < row; i++) {
		int j = 0;
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}

char Iswin(char board[ROW][COL], int row, int col) {

	for (int i = 0; i < row; i++) {
		int count = 0;
		for (int j = 0; j < col; j++) {
			if (board[i][0] == board[i][j] && board[i][j] != ' ') {
				count++;
			}
		}
		if (count == 5) {
			return board[i][0];
		}
	}

	for (int i = 0; i < row; i++) {
		int count = 0;
		for (int j = 0; j < col; j++) {
			if (board[0][i] == board[j][i] && board[j][i] != ' ') {
				count++;
			}
		}
		if (count == 5) {
			return board[0][i];
		}
	}
	int count = 0;
	for (int i = 0; i < row; i++) {
		if (board[0][0] == board[i][i] && board[i][i] != ' ') {
			count++;
		}
		if (count == 5) {
			 count = 0;
			return board[i][i];
		}
	}
	count = 0;
	for (int i = 0; i < row; i++) {
		if (board[0][row-1] != board[i][row-1- i] || board[i][row - 1 - i] == ' ') {
			break;
		}
		else {
			count += 1;
		}
		if (count == 5) {
			return board[0][row-1];
		}
	}
	count = 0;
	if (Full(board, ROW, COL)) {
		return 'Q';
	}
	return 'C';//继续游戏

}