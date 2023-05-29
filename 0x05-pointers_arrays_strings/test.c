#include <stdio.h>
#include "main.h"
/**
 * main - this function has a list of what matters to me.
 *
 * Discription: this function contains my first 10 things that can matter
 * to me in any type of relationship with anyone.
 *
 * Return: Always 0.
 */
int main(void) 
{
	char* what_matters[10];
	int i;
    
	for (int i = 0; i < 9; i++)
	{
		what_matters[i] = "karamty";
	}
	what_matters[9] = "you";
	return (0);
}
