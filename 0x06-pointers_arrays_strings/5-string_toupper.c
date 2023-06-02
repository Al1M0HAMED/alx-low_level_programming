#include "main.h"
/**
 * string_toupper - this function make every lower case in a string upper.
 *
 * @s: string.
 *
 * Retrun: a string.
 */
char *string_toupper(char *s)
{
	int i;

	i = 0; 
	while (*(s+ i) != '\0')
	{
		if (*(s + i) < 'a' && *(s + i) >= 'A')
			*(s + i) += ' ';
		i++;
	}
	return (s);
}
