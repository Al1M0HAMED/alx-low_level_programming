#include <stdio.h>
/**
 * main - this is the main function
 *
 * Discrprion: this function print from 0..9 and from a..f with three putchar
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
        {
                putchar(i);
        }
	putchar('\n');

	return (0);
}
