#include "main.h"
/**
 * print_line - this function is for printing certin number of _.
 *
 * @n: parametar is int.
 *
 * Return: nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
