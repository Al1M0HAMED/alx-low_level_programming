#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets afds vfdasfdsa
 * @n: afds
 * @index: afsd
 * Return: 1 ifsafd woafsdrks, -1 if erfsdaror
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
