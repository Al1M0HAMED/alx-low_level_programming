#include "main.h"
/**
 *  _strcpy - no.
 *
 * @dest: no.
 *
 * @src: no.
 *
 * Return: no.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(src + i) != 0)
	{

		*(dest + i) = *(src + i);
		if (*(src + i) == 0)
			j = i + 1;
		i++;
	}
	*(dest + j) = *(src + j);
	return (dest);
}
