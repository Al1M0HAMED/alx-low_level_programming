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
				break;
			j++;
		}
		if (s[i] == accept[j])
			break;
		i++;
	}
	if (s[0] == '\0' || accept[0] == '\0' || s[i] != accept[j])
		return (NULL);
	else if (s[i] == accept[j])
		return (s + i);
	else
		return (NULL);
}
