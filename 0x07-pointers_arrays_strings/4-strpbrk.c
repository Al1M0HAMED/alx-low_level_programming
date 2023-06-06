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
	int i, j, n, l;

	i = 0, n = 1;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && n == 1)
		{
			if (s[i] == accept[j])
			{
				n = 0;
				l = i;
			}
			j++;
		}
		i++;
	}
	if (n == 0)
		return (s + l);
	else if (accept[0] == '\0' && s[0] != '0')
		return (s + i);
	else if (s[0] == accept[0])
		return (s);
	else
		return (NULL);
}
