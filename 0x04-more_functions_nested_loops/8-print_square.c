#include "main.h"
/**
 * print_square - this function prints a square, followed by a new line.
 *
 * @size: parametar is int.
 *
 * Return: nothing.
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size == 0 || size < 0)
		_putchar('\n');
}
