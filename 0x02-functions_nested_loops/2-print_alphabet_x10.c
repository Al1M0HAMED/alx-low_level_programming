#include "main.h"
/**
 * print_alphabet_x10 - this function prints the alphabet 10 times.
 *
 * Return: this function dont return any value
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
