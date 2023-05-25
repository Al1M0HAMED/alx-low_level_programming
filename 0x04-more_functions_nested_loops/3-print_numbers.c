#include "main.h"
/**
 * print_numbers - this function prints from one to eight.
 *
 * Description: this from one to eight only with _putchar function.
 *
 * Return: nothing.
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
