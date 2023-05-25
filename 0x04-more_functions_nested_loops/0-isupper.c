#include "main.h"

/**
 * _isupper - this function check if the parametar is upper.
 *
 * @c: parametar is int.
 *
 * Return: one if upper and zero if otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
