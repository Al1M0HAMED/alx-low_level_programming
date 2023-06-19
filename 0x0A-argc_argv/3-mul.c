#include <stdio.h>
#include <stdlib.h>
/**
 * main - is the main function.
 *
 * @argc: .
 *
 * @argv: .
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, n, nn;
	char s1[25];
	char s2[25];

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	i = 1;
	while (i < 3)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (i == 1)
				s1[j] = argv[i][j];
			else
				s2[j] = argv[i][j];
			j++;
		}
		i++;
	}
	n = atoi(s1);
	nn = atoi(s2);
	printf("%d\n", nn * n);
	return (0);
}
