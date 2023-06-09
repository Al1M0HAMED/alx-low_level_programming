#include "main.h"
int i = 0, n = 1;
/**
 *
 *
 *
 *
 *
 */
void _print_rev_recursion(char *s)
{
    if (i == 0 && n == 0)
    {
        _putchar(*s);
	--s;
	_putchar(*s);
        return;
    }
    if (n)
    {
        if (*s == '\0')
        {
            n = 0;
            i--;
        }
        else if (*s != '\0')
        {
            i++;
            _print_rev_recursion(++s);
        }
    }
    if (i != -1)
    {
        i--;
        _putchar(*s);
        _print_rev_recursion(--s);
    }
}
