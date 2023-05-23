#include "main.h"
/**
 * print_sign - a function that check if the parametar is + or - or 0.
 *
 * @n: the parametar is int.
 *
 * Discription: prints '+' if n is greater than zero, and prints '+' if n is
 * greater than zero and, prints '-' if n is less than zero.
 *
 * Return: return zero if the parametar is zero, and 1 if it's positive and -1
 * if it's negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
