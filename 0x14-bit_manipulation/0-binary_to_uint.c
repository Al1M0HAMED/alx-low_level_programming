#include "main.h"
/**
 * binary_to_uint - this function converts binary to unsigned int.
 * @binary: is the binary string.
 * Return: the unsigned decimal if converted or 0 if faild.
 */
unsigned int binary_to_uint(const char *binary)
{
	const char *b = binary;
	int power = 0;
	unsigned int bit, unit = 0;

	if (binary != NULL)
	{
		while (*binary != '\0')
			binary++;
		binary--;

		while (binary >= b)
		{
			if (*binary < '0' || *binary > '1')
				return (0);
			bit = (*binary - '0') * (1 << power);
			unit = unit + bit;
			power++, binary--;
		}
	}
	return (unit);
}
