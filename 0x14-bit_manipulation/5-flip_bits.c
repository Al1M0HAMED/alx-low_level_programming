#include "main.h"
/**
 * flip_bits - number of bits you would need to flip
 * to represent another number.
 * @n: is the original unit.
 * @m: destiny unit.
 * Return: differance.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = sizeof(long unsigned int) * 8, differance = 0;

	while (i)
	{
		if ((m & 1) != (n & 1))
			differance++;
		n >>= 1, m >>= 1, i--;
	}
	return (differance);
}
