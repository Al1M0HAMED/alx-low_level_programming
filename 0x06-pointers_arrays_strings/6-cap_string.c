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
	int i, j;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == '.') | (str[i] == ';') | (str[i] == ',') | (str[i] == '\n') | 
				(str[i] == '\t') | (str[i] == ' ') | (str[i] == '?') | (str[i] == '!') | 
				(str[i] == '\"') | (str[i] == '(') | (str[i] == ')') | (str[i] == '{') | 
				(str[i] == '}'))
			{
				j = 1;
				while (str[i + j] < 65 && str[i + j] > 90)
				{
					if (str[i + j] >= 97 && str[i + j] <= 122)
					{
						str[i + j] -= 32;
					}
					else j++;
				}
			}
		i++;
	}
	return (str);
}
