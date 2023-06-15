#include "main.h"
/**
 * create_array - this function creates an array of chars.
 *
 * @c: parameter is char.
 *
 * @size: parameter is int.
 *
 * Return: NULL if size 0 or failed to alloc mem else.. pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(p + i) = c;
		i++;
	}
	return (p);
}
