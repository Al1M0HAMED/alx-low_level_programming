#include "main.h"

/**
 * get_endianness - cvxv DSA Ads
 * Return: 0 SAFD aDS dsa, 1 if ADSF SFDA
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
