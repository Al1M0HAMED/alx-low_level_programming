#include "main.h"
/**
 * _strdup - this is an implementation of function strdup.
 *
 * @str: parameter is pointer to array of chars.
 *
 * Return: On success, returns a pointer to the duplicated string. It returns
 *  NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	unsigned int size, i;
	char *p;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	size = ((i + 1) * sizeof(char));
	if (size <= 0)
		return (NULL);
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
