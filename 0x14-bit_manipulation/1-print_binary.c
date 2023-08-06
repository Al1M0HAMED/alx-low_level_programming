#include "main.h"
/**
 * print_binary - this function converts decimal to binary and then prints it.
 * @decimal: is the decimal value.
 */
void print_binary(unsigned long int decimal)
{
	long double bit = 1;
	int i = 0;

	if (decimal == 0)
		putchar('0');
	while (bit <= decimal)
	{
		bit = bit * 2;
		i = i + 1;
	}
	bit = bit * 0.5;
	while (i > 0)
	{
		if (bit <= decimal)
		{
			decimal = decimal - bit;
			putchar('1');
		}
		else
			putchar('0');
		bit = bit * 0.5;
		i = i - 1;
	}
}
