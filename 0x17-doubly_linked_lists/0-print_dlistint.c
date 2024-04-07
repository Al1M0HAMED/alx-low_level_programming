#include "lists.h"
/**
 * print_dlistint - print list element's and nubers.
 * @h: plist.
 * Return: size_t value.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
