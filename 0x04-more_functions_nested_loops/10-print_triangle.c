#include "main.h"
/**
 * print_triangle - this function prints triangle.
 *
 * @size: parametar is int.
 *
 * Return: nothing.
 */
void print_triangle(int size)
{
	int row, coulmns, spaces;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 0; spaces < (size - row); spaces++)
			{
				_putchar(' ');
			}
			for (coulmns = 1; coulmns <= row; ++coulmns)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
}
