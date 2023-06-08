#include "main.h"
/**
 * _puts_recursion - this function is a implementation of puts function in c.
 *
 * @s: parameter is string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') 
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
}
