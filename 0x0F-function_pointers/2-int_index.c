#include "function_pointers.h"
/**
 * int_index - search for int.
 *
 * @array: arr of int.
 *
 * @size: int.
 *
 * @cmp: int pointer to function.
 *
 * Return: -1 or index of array when find match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != NULL && array != NULL && size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
