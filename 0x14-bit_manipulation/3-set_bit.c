#include "main.h"
/**
 * set_bit - this function sets a bit into 1 at specific index.
 * @n: is the unit.
 * @index: is the index we need to change the bit at.
 * Return: 1 if the bit did change and -1 if faild.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);
	bit = ((*n >> index) & 1);
	if (bit == 0)
		*n = (*n + (1 << index));
	return (1);
}
