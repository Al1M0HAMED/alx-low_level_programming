#include "main.h"
#include <stdio.h>
/**
 * times_table - this function prints 9 times table.
 *
 * Return: this function do not return any value.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int c = (j * i);

			if (c >= 10)
				printf(" %d", c);
			else
				printf("  %d", c);
			if (j != 9)
				printf(",");
		}
		printf("\n");
	}
}
