#include "main.h"
/**
 * print_alphabet - this function prints the alphabet
 *
 * Return: this function dont return any value
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}