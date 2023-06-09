#include "main.h"
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
int _pow_recursion(int x, int y)
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
