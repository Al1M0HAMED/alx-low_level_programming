#include "main.h"

void swap_int(int *a, int *b)
{
	int x = *(a);
	int l = *(b);
	*a = l;
	*b = x;	
}
