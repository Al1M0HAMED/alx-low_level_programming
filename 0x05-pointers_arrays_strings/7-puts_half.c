#include "main.h"
/**
 * puts_half - nothing.
 *
 * @str: char.
 */
void puts_half(char *str)
{
	int i, x, n, half_length;

	i = 0;
	while (*(str + i))
	{
		i++;
	}

	if (i % 2 != 0)
	{
		half_length = ((i - 1) / 2);
	 	for (n = 0; n < half_length; n++)
        	{
                	x = n + (half_length - 1);
                	_putchar(*(str + x));
        	}
	}
	else
	{
		half_length = (i / 2);
		for (n = 0; n < half_length; n++)
		{
			x = n + half_length;
			_putchar(*(str + x));
		}
	}
	_putchar('\n');
}
