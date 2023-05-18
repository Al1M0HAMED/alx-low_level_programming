#include <stdio.h>
/**
 * main - this is the main function 
 *
 * Discription: this funciton prints all digits with a , after but with only 4
 * putchar functions.
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	
	for (i = 48; i <= 57; i++)
	{
		putchar((i *'A') / 'A');
	if (i < 57)
		{	
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return(0);
}
