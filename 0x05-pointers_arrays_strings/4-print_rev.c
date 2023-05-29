#include "main.h"
/**
 * print_rev - nothing.
 *
 * @s: nothing.
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	j = (i - 1);
	while (*(s + j) != '\0')
	{
		_putchar(*(s + j));
		j--;
	}
	_putchar('\n');
}
