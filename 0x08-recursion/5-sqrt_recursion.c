#include "main.h"
int helper(int n, int i);
/**
 * _sqrt_recursion - this function returns the natural square root of a number.
 *
 * @n: parameter is int.
 *
 * Return: If n does not have a natural sqrt returns -1 else returns the sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (helper(n, 1));
	else
		return (-1);
}
/**
 * helper - this function helps _sqrt_recursion function.
 *
 * @n: parameter is int.
 *
 * @i: parameter is int.
 *
 * Return: If n does not have a natural sqrt returns -1 else returns the sqrt
 */
int helper(int n, int i)
{
	if (i * i == n && i <= n)
		return (i);
	else if (i > n)
		return (-1);
	return (helper(n, i + 1));
}
