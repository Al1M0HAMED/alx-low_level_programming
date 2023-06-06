#include "main.h"
/**
 * print_chessboard - this function prints the chess board.
 *
 * @a: is pointer pointing to 2d array.
 *
 * Return: Nothing.
 */
void print_chessboard(char (*a)[8])
{
	int rows, coulmns;

	rows = 0;
	while (rows < 8)
	{
		coulmns = 0;
		while (coulmns < 8)
		{
			printf("%c", a[rows][coulmns]);
			coulmns++;
		}
		printf("\n");
		rows++;
	}
}
