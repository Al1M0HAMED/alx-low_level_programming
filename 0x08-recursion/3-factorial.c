#include "main.h"
/**
 * factorial - this function calculate the factorail of a int.
 *
 * @n: parameter is int.
 *
 * Return: the factorail.
 */
int factorial(int n)
{
	if (n <= 0)
	{
		if (n == 0)
			return (1);
		else
			return (-1);
	}
	else
		return (n * factorial(n - 1));
}
