#include <stdio.h>
#include <stdlib.h>
/**
 * main - ..
 *
 * @argc: .
 *
 * @argv: .
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		if (atoi(argv[i]) > 0)
			sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
