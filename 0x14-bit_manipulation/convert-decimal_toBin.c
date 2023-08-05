#include "main.h"
/**
 *
 *
 *
 */
char *conv_dic(int decimal, char *binary)
{
	int index = 0;

	while (decimal > 0)
	{
		if (decimal % 2 == 0)
			binary[index] = '0';
		else
			binary[index] = '1';
		decimal = decimal / 2, index++;
	}
	binary[index] = '\0';
	rev_string(binary);

	return (binary);
}
