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
	int i, sum1, sum2, n1, n2;

	i = 0, sum1 = 0, sum2 = 0, n1 = 0, n2 = 0;
	while (i < size)
	{
		n1 = ((size * i) + i);
		n2 = (size - 1) * (i + 1);
		sum1 += a[n1];
		sum2 += a[n2];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
