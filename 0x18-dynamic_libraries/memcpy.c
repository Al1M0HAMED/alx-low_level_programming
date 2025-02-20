#include "main.h"
/**
 * _memcpy - this function unction copies n bytes from memory area src to
 * memory area dest.
 *
 * @dest: this parameter is the destination array.
 *
 * @src: this parameter is the source array.
 *
 * @n: parameter is unsigned int.
 *
 * Return: Always the destenation.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
