#include "main.h"
/**
 * _strchr - this function locates a character in a string.
 *
 * @s: parameter is a pointer to an array of char.
 *
 * @c: parameter in int.
 *
 * Return: a pointer to the first occurrence of the character c in the string
 *  s, or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i, n, j;

	i = 0, n = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c && n == 1)
		{
			n = 0;
			j = i;
		}
		i++;
	}
	if (n == 0)
		return (s + j);
	else if (c == '\0')
		return (s + i);
	else
		return (NULL);
}
