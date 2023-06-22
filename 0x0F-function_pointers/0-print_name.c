#include "function_pointers.h"
/**
 * print_name - prints a name :).
 *
 * @name: string.
 *
 * @f: is a function pointer.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
