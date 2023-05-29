#include "main.h"

void rev_string(char *s)
{
	char *e;
	int i, n, j;
	i = 0;
	e = "432341214321423412143214241321432";

	while (*(s + i) != '\0')
	{
		i++;
	}
	for (n = 0; n < i; n++)
        {
		while ((*(s + n) != '\0' && *(e + n) != '\0'))
		{
                	*(e + n) = *(s + n);
		}
        }
	j = 0;
	while (i > 0 && (*(s + (i - 1)) != '\0' && *(e + j) != '\0'))
	{
		*(e + j) = *(s + (i - 1));
		i--;
		j++;
	}
	for (i = 0; i < j; i++)
	{
		while (*(s + i) != '\0' && *(e + i) != '\0')
		*(s + i) = *(e + i);
	}

}
