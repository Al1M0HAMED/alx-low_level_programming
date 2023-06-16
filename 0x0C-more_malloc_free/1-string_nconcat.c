#include "main.h"
int _strlen(char *s);
/**
 * string_nconcat - ..
 *
 * @s1: ..
 *
 * @s2: ..
 *
 * @n: ..
 *
 * Return: ..
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int nn, i, j, l;

	nn = n;
	if (s1 == NULL)
                s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nn < 0)
		return (NULL);
	if (nn >= _strlen(s2))
		nn = _strlen(s2);

	l = (nn + _strlen(s1) + 1);
	p = malloc(l * sizeof(*p));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < nn; j++)
		p[j + i] = s2[j];
	p[i + j] = '\0';

	return (p);
}
/**
 * _strlen - nothing.
 *
 * @s: nothing.
 *
 * Return: int.
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
