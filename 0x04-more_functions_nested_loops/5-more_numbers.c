#include "main.h"
/**
 * more_numbers - this function prints from 0 to 14.
 *
 * Description - this function print form 0 to 14 with only three _putchar.
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int n, i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j < 67; j++)
		{
			if (j == 58)
				n = 48;
			else if (j == 57 || j == 59 || j == 60 || j == 61 || j == 63 || j == 65)
				n = 49;
			else if (j == 62)
				n = 50;
			else if (j == 64)
				n = 51;
			else if (j == 66)
				n = 52;
			if (j >= 48 && j < 58)
				_putchar(j);
			else if (j >= 57)
				_putchar(n);
		}
		_putchar('\n');
	}
}
