#include <stdio.h>
/**
 * main - this program prints all argv strings passed to it by cli.
 *
 * @argc: parameter is int.
 *
 * @argv: parameter is a pointer to array of char.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i != argc)
	{
		printf("%s\n", argv[i]);
			i++;
	}
	return (0);
}
