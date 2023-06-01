#include "main.h"
/**
 * _strncat - this function concatonate a strign also but with a certen number.
 *
 * @dest: parameter is string.
 *
 * @src: parameter is string.
 *
 * @n: parameter is int.
 *
 * Return: dest the string after the other string added to.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0' && j < n)
	{
		*(dest + (i + j)) = *(src + j);
		j++;
	}
	*(dest + (i + n)) = '\0';
	return (dest);
}
