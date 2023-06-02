#include "main.h"
/**
 * reverse_array - this function reverse an array elements.
 *
 * @a: is pointer to array.
 *
 * @n: is integer.
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, l, first_e, last_e;

	l = (n + 1) / 2;
	i = 0, j = (n - 1);
	while (i != l)
	{
		last_e = a[j];
		first_e = a[i];
		a[j] = first_e;
		a[i] = last_e;
		j--;
		i++;
	}
}
