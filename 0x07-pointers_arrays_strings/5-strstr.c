#include "main.h"
/**
 * _strstr - this function is an implemintation of strstr function.
 *
 * @haystack: is a char to array.
 *
 * @needle: is a char to array.
 *
 * Return: pointer to the beginning of the located substring, or NULL if the
 * substring is not found.
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
		if (n == j && j != 0 && n != 0)
			return (haystack + i);
		i++;
	}
	if (needle[0] == '\0')
		return (haystack);
	else
		return (NULL);
}
