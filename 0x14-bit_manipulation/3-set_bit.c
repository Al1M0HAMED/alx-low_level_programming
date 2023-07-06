#include "main.h"
#include <stdlib.h>

/**
 * set_bit - dfsa the afds fasd a bit to 1 afsd a given index
 * @n: fads
 * @index: afds
 * Return: afds
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
