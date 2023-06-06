#include "main.h"
/**
 * _strpbrk - this function is an implementation of strpbrk function.
 *
 * @s: parameter is array of char.
 *
 * @accept: parameter is array of char.
 *
 * Return: Always pointer to the byte s.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
