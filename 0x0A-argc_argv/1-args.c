#include <stdio.h>
/**
 * main - this program prints the number of arg passed to it by cli.
 *
 * @argc: parameter is int.
 *
 * @argv: parameter is a pointer to array of char.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	if (0)
	{
		argv[0] = 0;
	}
	return (0);
}
