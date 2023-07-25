#include "main.h"
/**
 *  swap_int - nothing.
 *
 * @a: nothing.
 *
 * @b: nothing.
 *
 * Return: nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
