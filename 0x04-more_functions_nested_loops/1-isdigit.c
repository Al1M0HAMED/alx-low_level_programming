#include "main.h"
/**
 * _isdigit - this function checks if the parametar is a digit or not.
 *
 * Description: this function checks if the parametar is a digit or not
 * and then Returns 1 if the parametar is digit otherwise returns 0.
 *
 * @c: parametar is int.
 *
 * Return: if the parametar is digit returns 1 otherwise return 0.
 */
int _isdigit(int c)
{
	if (c > 57 || c < 48)
		return (0);
	else
		return (1);
}
