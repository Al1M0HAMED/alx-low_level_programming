#include "main.h"
/**
 * _strspn - this function is an implementation of strspn function.
 *
 * @s: parameter is the source string.
 *
 * @accept: is the test string.
 *
 * Return: Always the number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, n, Do;
	unsigned int l, i;

	i = 0, Do = 1;
	while (s[i] != '\0' && Do)
	{
		j = 0, n = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				n++;
			j++;
		}
		if (n == 0)
		{
			Do = 0;
			l = i;
		}
		i++;
	}
	return (l);
}
