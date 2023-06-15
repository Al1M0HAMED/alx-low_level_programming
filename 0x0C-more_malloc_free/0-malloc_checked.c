#include "main.h"
/**
 * malloc_checked - ..
 *
 * @b: ..
 *
 * Return: ..
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;
	unsigned int s;

	s = 0;
	if (b < s)
		exit(98);
	b = b;
	p = malloc(sizeof(unsigned int));
	if (p == NULL)
		exit(98);
	return (p);
}
