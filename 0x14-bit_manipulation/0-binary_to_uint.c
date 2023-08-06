#include "main.h"
/**
 * binary_to_uint - this function converts binary to unsigned int.
 * @binary: is the binary string.
 * Return: the unsigned decimal if converted or 0 if faild.
 */
unsigned int binary_to_uint(const char *binary)
{
	int i, power = 0;
	unsigned int unit = 0;

	while (*binary != '\0')
		binary++, i++;
	--binary;
	while (i > 0 && i <= 33)
	{
		if (*binary == '1')
			unit = unit + (1 << power);
		power++, i--;
	}
	return (unit);
}
