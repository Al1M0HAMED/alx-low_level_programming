#include "main.h"
/**
 * get_bit - this function gets the value of specific bit.
 * @n: is the unit.
 * @index: is the specific index.
 * Return: the bit or -1 if faild.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char binary[66];
	unsigned long int bit;
	unsigned int l;

	l = decimal_to_binary(binary, n);
	if (index > l || index > 64)
		return (-1);
	bit = n >> index;
	return (bit & 1);
}
/**
 * decimal_to_binary - this function coverts decimal to binary.
 * @decimal: is the decimal number.
 * @binary: is the binary string.
 * Return: length.
 */
unsigned int decimal_to_binary(char *binary, unsigned long int decimal)
{
	long double i = 1, j = 0;
	unsigned int length = 0;

	if (!decimal)
	{
		binary[0] = '0';
		return (1);
	}
	for ( ; i <= decimal; i *= 2, j++)
		;
	if (i > ULONG_MAX)
		i *= 0.5;
	for (i *= 0.5; j; i *= 0.5, j--, length++)
	{
		if (decimal >= i)
		{
			binary[length] = '1';
			decimal -= i;
		}
		else
			binary[length] = '0';
	}
	binary[length] = '\0';
	return (length - 1);
}
