#include "main.h"
/**
 *
 *
 *
 *
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	if (min != max)
	{
		i = 0;
		while(i < ((max - min) + 1))
		{
			p[i] = (min + i);
			i++;
		}
	}
	else 
		p[0] = min;
	return (p);
}
