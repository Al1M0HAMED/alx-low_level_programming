#include "main.h"
/**
 * binary_to_uint - this function converts binary to unsigned int.
 * @binary: is the binary string.
 * Return: the unsigned decimal if converted or 0 if faild.
 */
unsigned int binary_to_uint(const char *binary)
{
	long int bit = 1;
	unsigned int i, unit = 0;

	if (binary != NULL)
	{
		i = 0;
		while (binary[i] != '\0')
		{
			if (binary[i] != '0' && binary[i] != '1')
				return (0);
			i = i + 1;
		}
		i = i - 1;
		if (i > 64)
			return (0);
		while (binary[i] != '\0')
		{
			if (binary[i] == '1')
				unit = unit + bit;
			bit = bit * 2;
			i = i - 1;
		}
		return (unit);
	}
	return (0);
}
