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
	int i, j, n;

	i = 0, n = 1;
	while (n)
	{
		j = 0;
		while (n)
		{
			if (s[i] == accept[j] || accept[j] == '\0')
				break;
			j++;
		}
		if (s[i] == accept[j] || s[i] == '\0')
			break;
		i++;
	}
	if (s[i] == accept[j])
		return (s + i);
	else
		return (NULL);
}
