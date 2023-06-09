#include <stdio.h>
#include <stdlib.h>

int multi_f(char *s);
int char_2_int(char);
/**
 * main - is the main.
 *
 * @argc: int.
 *
 * @argv: string.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}

	i = multi_f(argv[1]) * multi_f(argv[2]);
	printf("%d\n", i);

	return (0);
}
/**
 * multi_f - no.
 *
 * @s: is string.
 *
 * Return: no.
 */
int multi_f(char *s)
{
	int i = 0;
	int result = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i = 1;
	}

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			result = result * 10 + char_2_int(s[i]);
		}
		else
		{
			printf("Error\n");
			exit(1);
		}
		i++;
	}
	return (sign * result);
}
/**
 * char_2_int - no.
 *
 * @c: is char.
 *
 * Return: no.
 */
int char_2_int(char c)
{
	return (c - '0');
}
