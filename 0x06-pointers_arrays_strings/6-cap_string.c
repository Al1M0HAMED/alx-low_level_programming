#include "main.h"
/**
 * cap_string - this function capitalize a string.
 *
 * @str: this parameter is string.
 *
 * Return: Always str.
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '.') || (str[i] == ';') || (str[i] == ',') ||
				(str[i] == '\n') || (str[i] == '\t') || (str[i] == ' ') || (str[i] == '?')
				|| (str[i] == '!') || (str[i] == '"') || (str[i] == '(') ||
				(str[i] == ')') || (str[i] == '{') || (str[i] == '}'))
		{
			if (str[i + 1] >= 97 && str[i + 1] <= 122)
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
