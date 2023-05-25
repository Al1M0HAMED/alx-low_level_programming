#include "main.h"
/**
 * print_most_numbers - this function prints from one to eight.
 *
 * Description: this from one to eight only with _putchar but not 2 or 4.
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
