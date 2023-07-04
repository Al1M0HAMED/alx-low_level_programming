#include "lists.h"
/**
 * print_listint - this function prints all list's elements.
 * @h: linked list.
 * Return: number of list length.
 */
size_t print_listint(const listint_t *h)
{
	size_t length;

	for (length = 0; h != NULL; h = h->next, length++)
		printf("%d\n", h->n);
	return (length);
}
