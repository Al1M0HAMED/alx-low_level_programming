#include "main.h"

char *leet(char *s)
{
	int i;
	char n;

	i = 0;
	while (s[i] != '\0')
	{
		n = s[i];
		if (n == 'a' || n == 'A' || n == 'e' || n == 'E' || n == 't'
				|| n == 'T' || n == 'o' || n == 'O' || n == 'l' || n == 'L')
		{
			while (n == 'a' || n == 'A')
			{
				s[i] = '4';
			}
			while (n == 'e' || n == 'E')
                        {
                                s[i] = '3';
                        }
			while (n == 'o' || n == 'O')
                        {
                                s[i] = '0';
                        }
			while (n == 't' || n == 'T')
                        {
                                s[i] = '7';
                        }
			while (n == 'l' || n == 'L')
                        {
                                s[i] = '1';
                        }
		}
		return (s);
	}
}
