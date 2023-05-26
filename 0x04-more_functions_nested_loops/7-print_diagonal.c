#include "main.h"
/**
 * print_diagonal - this function prints diagonals.
 *
 * @n: parametar is int.
 *
 * Return: nothing.
 */
void print_diagonal(int n)
{
	int row, space;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (space = 0; space < row; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
