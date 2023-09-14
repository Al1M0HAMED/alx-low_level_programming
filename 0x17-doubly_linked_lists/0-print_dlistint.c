#include "lists.h"
/**
 * print_dlistint - this program prints all the elements of dlistint_t list.
 * @h: is the head of the linked list
 * Return: the length of the linked list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
