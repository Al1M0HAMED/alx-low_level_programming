#include "main.h"
/**
 * get_bit - this function gets the value of specific bit.
 * @n: is the unit.
 * @index: is the specific index.
 * Return: the bit or -1 if faild.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
