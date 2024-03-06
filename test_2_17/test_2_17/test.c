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
		printf("��һ�ʤ!\n");
	}
	else if (ret == '#') {
		printf("���Ի�ʤ!\n");
	}
	else if (ret == 'Q') {
		printf("˫��ƽ��\n");
	}

}

int main() {

	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		if (input == 1) {
			game();
			//printf("����Ϸ\n");
		}
		else if (input == 0) {
			printf("�˳���Ϸ\n");
		}
		else {
			printf("�������ڷ�Χ������������\n");
		}

	} while (input);

	return 0;
}