#include "3-calc.h"
/**
 * main - main function.
 * @argc: int.
 * @argv: string.
 * Return: op or 0.
 */
int main(int argc, char *argv[])
{
	int (*Pf)(int, int);

	Pf = get_op_func(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (Pf == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", Pf(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
