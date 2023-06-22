#include "variadic_functions.h"
/**
 * sum_them_all - .
 * @n: .
 * Return: sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int i, sum, nn;
	va_list list;

	nn = n;
	if (nn > 0)
	{
		va_start(list, n);
		i = 0, sum = 0;
		while (i < nn)
		{
			sum += va_arg(list, int);
			i++;
		}
		va_end(list);
		return (sum);
	}
	return (0);
}
