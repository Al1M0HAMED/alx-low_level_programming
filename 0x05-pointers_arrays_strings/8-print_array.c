#include "main.h"
/**
 * print_array - nothing
 *
 * @a: nn.
 *
 * @n: nn.
 */
void print_array(int *a, int n)
{
	int i;
	if (n <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i != (n - 1))
				printf(", ");
			else
				printf("\n");
		}
	}
}
