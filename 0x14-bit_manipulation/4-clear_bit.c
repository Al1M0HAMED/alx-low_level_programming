#include "main.h"
int _pow_recursion(int x, unsigned int y);
/**
 * clear_bit - is siting bit to 1
 * @n: is the unit.
 * @index: is the index.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i = 0, bit;

	if (index > 64)
		return (-1);
	bit = (*n >> index);
	if ((bit & 1) == 1)
		i = _pow_recursion(2, index);
	*n = *n - i;
	return (1);
}
/**
 * _pow_recursion - this function calc the val of x raised to the power of y.
 *
 * @x: parameter is int.
 *
 * @y: parameter is int.
 *
 * Return: If y is lower than 0, the function returns -1 else returns the val
 * of x raised to the power of y.
 */
int _pow_recursion(int x, unsigned int y)
{
	if (y <= 0)
	{
		if (y == 0)
			return (1);
		else
			return (-1);
	}
	else
		return (x * _pow_recursion(x, (y - 1)));
}
