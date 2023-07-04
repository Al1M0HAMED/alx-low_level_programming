#include "lists.h"
/**
 * listint_len - this function returns the number of elements in a linked list.
 * @h: linked list.
 * Return: list length.
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
		length++, h = h->next;
	return (length);
}
