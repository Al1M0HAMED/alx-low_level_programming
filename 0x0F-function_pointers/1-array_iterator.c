#include "function_pointers.h"
/**
 * array_iterator - nothing.
 *
 * @array: array.
 *
 * @size: int.
 *
 * @action: function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, s;

	s = size;
	if (action != NULL && array != NULL)
	{
		i = 0;
		while (i < s)
		{
			action(array[i]);
			i++;
		}
	}
}
