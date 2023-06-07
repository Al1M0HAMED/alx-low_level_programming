#include "main.h"
/**
 * print_diagsums - this function prints the sum of the two diagonals of a
 * square matrix of integers.
 *
 * @a: parameter is pointer to an array.
 *
 * @size: parameter is int.
 *
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	i = 0, s1 = 0, s2 = 0;
	while (i < size)
	{
		s1 += a[(size * i) + i];
		s2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", s1, s2);
}
