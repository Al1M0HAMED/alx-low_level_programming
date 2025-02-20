#include "main.h"
/**
 * _memset - this function fills the first n bytes of the memory area pointed
 * to by s with the constant byte b.
 *
 * @b: is int.
 *
 * @n: is unsigned int.
 *
 * @s: s is a char pointer.
 *
 * Return: Always *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
