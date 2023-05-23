#include "main.h"
/**
 * _islower - is a function.
 *
 * @c: parametar is a charcter
 *
 * Discription: this function checks if the char is lower case or not
 * and then return a value.
 *
 * Return: return 0 if char is not lower otherwise returns 1.
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);
	else
		return (0);
}
