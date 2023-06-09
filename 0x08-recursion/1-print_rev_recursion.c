#include "main.h"
int i = 0, n = 1;
/**
 * _print_rev_recursion - this fnuction prints a string in reverse in
 * recursion.
 *
 * @s: parameter is string.
 *
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	if (i == -2 && n == 0)
		return;
   	if (n)
	{
		if (*s == '\0')
        	{
			n = 0;
			i--;
		}
        	else if (*s != '\0')
		{
			i++;
			_print_rev_recursion(++s);
		}
	}
	if (i != -3)
	{
		i--;
		_putchar(*s);
		_print_rev_recursion(--s);
	}
}
