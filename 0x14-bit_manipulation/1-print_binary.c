#include "main.h"
/**
 * print_binary - this function coverts decimal to binary.
 * @decimal: is the decimal number.
 */
void print_binary(unsigned long int decimal)
{
	float i = 1, j = 0;

	if (!decimal)
	{
		printf("0");
		return;
	}
	for ( ; i <= decimal; i *= 2, j++)
		;
	for (i *= 0.5; decimal || j; i *= 0.5, j--)
	{
		if (decimal >= i)
		{
			printf("1");
			decimal -= i;
		}
		else
			printf("0");
	}
}
