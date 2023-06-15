#include "main.h"
/**
 * str_concat - this function concatenates two strings.
 *
 * @s1: parameter is pointer to char of array.
 *
 * @s2: parameter is pointer to char of array.
 *
 * Return: NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, size1, size2, size, l;
	char *p;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	i = 0, size1 = 0, size2 = 0;
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			i++;
		}
		size1 = ((i + 1) * sizeof(char));
	}
	j = 0;
	if (s2 != NULL)
	{
		while (s2[j] != '\0')
		{
			j++;
		}
		size2 = ((j + 1) * sizeof(char));
	}
	size = size1 + size2;
	if (size <= 0)
		return (NULL);
	p = malloc(size);
	if (p == NULL)
		return (NULL);
	j = 0;
	while (s1[j] != '\0')
	{
		p[j] = s1[j];
		j++;
	}
	l = 0;
	while (s2[l] != '\0')
	{
		p[j] = s2[l];
		l++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
