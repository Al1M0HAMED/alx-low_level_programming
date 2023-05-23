#include "main.h"
/**
 * _abs - this function that computes the absolute value of an integer.
 *
 * @c: parametar is int.
 *
 * Return: the absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
