#include "main.h"
/**
 *
 *
 *
 *
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, n, Do;
	unsigned int l, i;
	i = 0, n = 0, Do = 1;
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
