#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, j, s, ss, r;

	i = 0;
	while (s1[i] != '\0')
	{
		s += s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ss += s2[j];
		j++;
	}
	if (i == j)
		r = (s - ss);
	else if (i != j && (s - ss) == 0)
		r = (s);
	else
		r = (s - ss);
	if (r > 0)
		r = 15;
	else if (r < 0)
		r = -15;
	return (r);
}
