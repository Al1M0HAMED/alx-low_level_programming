#include "main.h"
/**
 * _calloc - this is an implementation of calloc function.
 *
 * @nmemb: parameter is unsigned int and is data type size in bytes.
 *
 * @size: parameter is unsigned int.
 *
 * Return: ptr to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	int i, n, s;

	n = nmemb, s = size;
	if (n <= 0 || s <= 0)
		return (NULL);

	p = malloc(n * s);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (n * s); i++)
		p[i] = 0;
	return (p);
}
