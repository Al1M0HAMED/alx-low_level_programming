#include "main.h"

int _strcmp(char *s1, char *s2)
{
	int i, j, n, s, ss, r;

	i = 0, s = 0, ss = 0, j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
        {
                j++;
        }
	if (i == j)
	{
		n = 0;
                while (s1[n] != '\0')
                {
                        s += s1[n];
			n++;
                }
                n = 0;
                while (s2[n] != '\0')
                {
                	ss += s2[n];
			n++;
                }
		if (s > ss)
                        r = 15;
                else if (ss > s)
                        r = -15;
		else
			r = 0;

	}
	else if (i != j)
	{
		n = 0;
		while ( s1[n] != '\0')
		{
			s += s1[n];
			n++;
		}
		n = 0;
		while (s2[n] != '\0')
                {
                        ss += s2[n];
			n++;
                }
		if (s > ss)
			r = 15;
		else if (ss > s)
			r = -15;
	}
	return (r);
}
