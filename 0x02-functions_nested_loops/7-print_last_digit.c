#include "main.h"
/**
 * print_last_digit - is a function that prints the last digit of a number.
 *
 * Return: always the last digit of a number passed to the function.
 *
 * @c: parametar is int.
 */
int print_last_digit(int c)
{
	if (c < 0)
	{
		c = ((c % 10) * -1);
		_putchar(c + '0');
		return (c);
	}
	else
	{
		c = c % 10;
		_putchar(c + '0');
		return (c);
	}
}
