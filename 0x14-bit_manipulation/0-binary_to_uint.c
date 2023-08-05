#include "main.h"
/**
 * binary_to_uint - this function turn binary to decimal.
 * @b: is pointer to a char arr.
 * Return: unsigned decimal transformed or 0 if faild.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, unit = 0, j = 0;

	if (b != NULL)
	{
		while (b[j] != '\0')
		{
			if (b[j] != '0' && b[j] != '1')
				return (0);
			j++, i = i * 2;
		}
		i = i / 2, j = 0;
		while (b[j] != '\0')
		{
			if (b[j] == '1')
				unit += i;
			i = i / 2, j++;
		}
		return (unit);
	}
	return (0);
}
