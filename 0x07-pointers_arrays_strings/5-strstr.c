#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, n;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0, n = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
				n++;
			j++;
		}
		if (n == j && n > 0)
			return (haystack + i);
		i++;
	}
	return (NULL);
}
