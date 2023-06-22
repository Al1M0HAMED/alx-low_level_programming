#include "variadic_functions.h"
/**
 * print_numbers - func.
 * @separator: string.
 * @n: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i, num;
	va_list list;

	num = n;
	if (n > 0)
	{
		va_start(list, n);
		i = 0;
		while (i < num)
		{
			printf("%d", va_arg(list, int));
			if (i < (num - 1) && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(list);
	}
	putchar('\n');
}
