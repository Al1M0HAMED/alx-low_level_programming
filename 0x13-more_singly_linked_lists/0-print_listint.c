#include "lists.h"
/**
 * print_listint - this function prints all the elements of a linked list.
 * @h: is the address of the linked list.
 * Return: the length of the linked list.
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	len = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next, len++;
	}
	return (len);
}
