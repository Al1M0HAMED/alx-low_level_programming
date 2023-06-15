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
	unsigned int i, j, l;
	char *p;

	i = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	j = 0;
	for (j = 0; s1[j] != '\0'; j++)
		p[j] = s1[j];
	l = 0;
	for (l = 0; s2[l] != '\0'; l++, j++)
		p[j] = s2[l];
	p[j] = '\0';
	return (p);
}
