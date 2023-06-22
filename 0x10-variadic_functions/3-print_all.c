#include "variadic_functions.h"
/**
 * print_all - .
 * @format: string.
 */
void print_all(const char * const format, ...)
{
	int i, start;
	char sp[200];
	va_list list;
	char *str;

	va_start(list, format);
	i = 0, start = 0;
	while (format && format[i] != '\0')
	{
		sp[i] = format[i];
		switch (sp[i])
		{
			case 'i':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%d", va_arg(list, int));
				break;
			case 's':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				str = va_arg(list, char *);
				if (str != NULL)
				{

					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			case 'f':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%f", va_arg(list, double));
				break;
			case 'c':
				switch (start)
				{ case 1: printf(", "); }
				start = 1;
				printf("%c", va_arg(list, int));
				break;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
