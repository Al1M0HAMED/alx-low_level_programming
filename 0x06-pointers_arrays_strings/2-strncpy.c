#include "main.h"
/**
 * _strncpy - this function copys a string.
 *
 * @dest: parameter is string.
 *
 * @src: parameter is string.
 *
 * @n: parameter is int.
 *
 * Return: Always destnation string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i != n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
