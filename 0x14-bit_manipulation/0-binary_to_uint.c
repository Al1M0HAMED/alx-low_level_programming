#include "main.h"
/**
 * binary_to_uint - this function turn binary to decimal.
 * @b: is pointer to a char arr.
 * Return: unsigned decimal transformed or 0 if faild.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, unit = 0, j = 0;
	char binary[256];

	if (b != NULL)
	{
		while (b[i] != '\0')
		{
			if (b[i] != '0' && b[i] != '1')
				return (0);
			binary[i] = b[i];
			i++;
		}
		binary[i] = '\0';
		rev_string(binary);
		i = 1;
		while (binary[j] != '\0')
		{
			if (binary[j] == '1')
				unit += i;
			i = i * 2, j++;
		}
		return (unit);
	}
	return (0);
}
