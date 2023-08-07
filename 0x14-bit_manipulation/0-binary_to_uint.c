#include "main.h"
/**
 * binary_to_uint - this function converts binary to unsigned int.
 * @binary: is the binary string.
 * Return: the unsigned decimal if converted or 0 if faild.
 */
unsigned int binary_to_uint(const char *binary)
{
	const char *binary_start = binary;
	int current_bit_power = 0;
	unsigned int current_bit_value, binary_value, result = 0;

	while (*binary != '\0' && binary != NULL)
		binary++;
	binary--;
	while (binary >= binary_start && binary != NULL)
	{
		if (*binary < '0' || *binary > '1')
			return (0);
		binary_value = *binary - '0';
		current_bit_value = binary_value * (1 << current_bit_power);
		result = result + current_bit_value;
		current_bit_power++;
		binary--;
	}
	return (result);
}
