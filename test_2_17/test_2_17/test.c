#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {
	printf("*****************************************************\n");
	printf("*****************   0. exit games   *****************\n");
	printf("*****************   1. play games   *****************\n");
	printf("*****************************************************\n");
}

void game() {

	char board[ROW][COL] = { 0 };
	InitBoard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	char ret = 0;
	while (1) {
		playerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')break;
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = Iswin(board, ROW, COL);
		if (ret != 'C')break;
	}
	if (ret == '*') {
		printf("玩家获胜!\n");
	}
	else if (ret == '#') {
		printf("电脑获胜!\n");
	}
	else if (ret == 'Q') {
		printf("双方平局\n");
	}

}

int main() {

	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		if (input == 1) {
			game();
			//printf("玩游戏\n");
		}
		else if (input == 0) {
			printf("退出游戏\n");
		}
		else {
			printf("该数不在范围，请重新输入\n");
		}

	} while (input);

	return 0;
}