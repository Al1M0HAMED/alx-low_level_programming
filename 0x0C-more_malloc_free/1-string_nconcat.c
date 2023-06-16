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
	unsigned int s1_l, s2_l, i, j;

	if (s2 == NULL)
		s2 = "";

	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;

	p = malloc(n + s1_l * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		if (j < n)
			p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
