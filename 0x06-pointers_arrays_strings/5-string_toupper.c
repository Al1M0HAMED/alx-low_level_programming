#include "main.h"
/**
 * string_toupper - this function make every lower case in a string upper.
 *
 * @s: string.
 *
 * Return: a string.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (s[i] > 90 && s[i] >= 97)
			s[i] -= ' ';
		i++;
	}
	return (s);
}
