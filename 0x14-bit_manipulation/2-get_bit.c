#include "main.h"
/**
 * get_bit - this function convert a unit to binary and then return a digit
 * value at a specific index.
 * @decimal: is unsigned int.
 * @index: is unsigned int.
 * Return: the digit value or -1 if faild.
 */
int get_bit(unsigned long int decimal, unsigned int index)
{
	char binary[256];
	unsigned int length;

	length = decimal_to_binary(binary, decimal);
	rev_string(binary);
	if (index > length)
		return (-1);
	return (binary[index] - '0');
}
/**
 * decimal_to_binary - this function coverts decimal to binary.
 * @decimal: is the decimal number.
 * @binary: is the binary string.
 * Return: length.
 */
unsigned int decimal_to_binary(char *binary, unsigned int decimal)
{
	unsigned int length = 0;

	long double i = 1, j = 0;

	if (!decimal)
	{
		printf("0");
		return;
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
/**
 * rev_string - this function reverse a string.
 *
 * @s: is a char pointer.
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int i, j, n, temp0, temp1;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	i--;
	j = i + 1;
	for (n = 0; n < j / 2; n++)
	{
		temp0 = *(s + n);
		temp1 = *(s + i);
		*(s + n) = temp1;
		*(s + i) = temp0;
		i--;
	}

}
