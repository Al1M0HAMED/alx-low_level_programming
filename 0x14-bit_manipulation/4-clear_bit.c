#include "main.h"
/**
 * clear_bit - is seting a bit to 0 at a specific index.
 * @n: is the unit.
 * @index: is the index.
 * Return: 1 if the bit has been set to 0 and -1 if faild.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);
	bit = ((*n >> index) & 1);
	if (bit == 1)
		*n = (*n - (1 >> index));
	return (1);
}
