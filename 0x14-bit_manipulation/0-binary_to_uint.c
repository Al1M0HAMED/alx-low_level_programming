#include "main.h"
/**
 * binary_to_uint - this function turn binary to decimal.
 * @b: is pointer to a char arr.
 * Return: unsigned decimal transformed or 0 if faild.
 */
unsigned int binary_to_uint(const char *b)
{
	long int i = 1, j = 0;
	unsigned int unit = 0;

	if (b != NULL)
	{
		for (; b[j] != '\0'; j++)
		{
			if (b[j] != '0' && b[j] != '1')
				return (0);
		}
		for (i = 1, j = j - 1; b[j] != '\0'; j--, i = i * 2)
		{
			if (b[j] == '1')
				unit += i;
		}
		return (unit);
	}
	return (0);
}
