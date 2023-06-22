#include "variadic_functions.h"
/**
 * print_strings - .
 * @separator: string.
 * @n: int.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i, num;
	char *str;
	va_list list;

	num = n;
	if (n > 0)
	{
		va_start(list, n);
		i = 0;
		while (i < num)
		{
			str = va_arg(list, char *);
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);

			if (i < (num - 1) && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(list);
	}
	putchar('\n');
}
