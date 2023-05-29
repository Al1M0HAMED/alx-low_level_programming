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
	int i;

	i = 0;
	while (*(src + i) != 0)
	{

		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
