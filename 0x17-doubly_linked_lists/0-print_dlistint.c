#include "lists.h"
/**
 * print_dlistint - this function prints data out of linked list.
 * @h: the list.
 * Return: the length of the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next, length++;
	}
	return (length);
}
