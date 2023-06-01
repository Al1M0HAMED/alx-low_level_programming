#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, s;

	i = 0, s = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s == 0)
	{
		s += s1[i] - s2[i];
		i++;
	}
	i--;
	return (s1[i] - s2[i]);	
}
