#include <stdio.h>
/**
 * main - this is the main function
 *
 * Discription: this function prints all the numbers digits but wiht but
 * wiht putchar function and without char data type.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
