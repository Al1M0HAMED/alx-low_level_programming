#include "main.h"

/**
 * get_bit - afd
 * @n: decimal fdsa
 * @index: fsd
 * Return: afds
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
