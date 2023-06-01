#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, j, n, s, ss, equal, r;

	i = 0, s = 0, ss = 0, equal = 0, r = 0, j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s1[j] != '\0')
        {
                j++;
        }
	if (i == j)
	{
		n = 0;
		while (n < i)
		{
			if (s1[n] == s2[n])
				equal++;
			else if (s1[n] > s2[n])
				s++;
			else if (s1[n] < s2[n])
				ss++;
			n++;
		}
		if (s > ss)
                        r = 15;
                else if (ss > s)
                        r = -15;
		else if (equal == n)
			r = 0;

	}
	else if (i != j)
	{
		for (n = 0; n < i; n++)
		{
			s += s1[n];
		}
		for (n = 0; n < i; n++)
                {
                        s += s2[n];
                }
		if (s > ss)
			r = 15;
		else if (ss > s)
			r = -15;
	}
	return (r);
}
