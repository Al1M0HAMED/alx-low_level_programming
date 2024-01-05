#include "lists.h"
/**
 * dlistint_len - counts the number of linked list elements.
 * @h: is the list.
 * Return: the lenght.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length++, h = h->next;
	}
	return (length);
}
