#include "main.h"
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
	int nn, i, j;

	nn = n;
	if (nn < 0)
		return (NULL);
	if (s1 == NULL)
                s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nn > _strlen(s2))
		nn = _strlen(s2);

	p = malloc((nn + _strlen(s1) + 1) * sizeof(char *));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; j < nn; j++)
		p[j + i] = s2[j];
	p[i + j] = '\0';

	return (p);
}
