#include "main.h"
int helper(int n, int i);
/**
 * is_prime_number - this function checks if the number is prime or not.
 *
 * @n: is int.
 *
 * Return: 1 if prime 0 if not.
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
/**
 * helper - this function checks if the number is prime or not.
 *
 * @n: parameter is int
 *
 * @i: parameter is int.
 *
 * Return: 1 if prime 0 if not.
 */
int helper(int n, int i)
{
	if (n < 0 || n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (i < n)
	{
		if (n % i == 0)
			return (0);
	}
	if (i >= n)
		return (1);
	return (helper(n, i + 1));
}
