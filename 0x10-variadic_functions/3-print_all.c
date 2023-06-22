#include "variadic_functions.h"
/**
 * print_all - .
 * @format: string.
 */
void print_all(const char * const format, ...)
{
	int i;
	char sp[200];
	va_list list;
	char *str;

	va_start(list, format);
	i = 0;
	while (format[i] != '\0' && format != NULL)
	{
		sp[i] = format[i];
		switch (sp[i])
		{
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 's':
				str = va_arg(list, char *);
				if (str != NULL)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				printf("%c", va_arg(list, int));
				break;
		}
		if ((sp[i] == 'i' || sp[i] == 's' || sp[i] == 'f' || sp[i] == 'c'
					&& format[i + 1] != '\0')
				printf(", ");
		i++;
	}
	va_end(list);
	printf("\n");
}
