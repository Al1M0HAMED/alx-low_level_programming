#include "main.h"
/**
 * leet - this function encodes a string.
 *
 * @s: parametar is string.
 *
 * Return: Always the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char encoded[] = {'A', 'E', 'O', 'T', 'L'};
	char encoder[] = {'4', '3', '0', '7', '1'};

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == encoded[j] || s[i] == (encoded[j] + 32))
			{
				s[i] = encoder[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
