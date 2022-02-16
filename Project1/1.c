#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char board[3][3]={ ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' '};
char back_board[5][5] = { ' ' ,'|',' ' ,'|',' ','-', '-', '-', '-', '-',' ','|', ' ', '|', ' ','-', '-', '-', '-', '-',' ','|' , ' ','|', ' ' };
void ground_struct();
//void down_chess(int row, int column)
//{
//
//}
//void judge()
//{
//
//}
//
void prin()
{
	printf("\n\n\n\n");
	int i, j,k;
	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 5; k++)//打印空格
		{
			printf("\t");
		}
		for (j = 0; j < 5; j++)
		{
			printf("%c", back_board[i][j]);
		}
		printf("\n");
	}
	printf("\n\n\n\n");
}
void give()//将board给back_board
{
	back_board[0][0] = board[0][0];
	back_board[0][2] = board[0][1];
	back_board[0][4] = board[0][2];
	back_board[2][0] = board[1][0];
	back_board[2][2] = board[1][1];
	back_board[2][4] = board[1][2];
	back_board[4][0] = board[2][0];
	back_board[4][2] = board[2][1];
	back_board[4][4] = board[2][2];
}
int main()
{
	give();
	prin();

 }
