#include "main.h"
/**
 * _strlen_recursion - this function calculate the length of a string.
 *
 * @s: parameter is pointer to array of char.
 *
 * Return: the length of string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(++s));
}
