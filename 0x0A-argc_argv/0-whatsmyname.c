#include <stdio.h>
/**
 * main - this program prints its name.
 *
 * @argc: parameter is int.
 *
 * @argv: parameter is char pointer to array.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
