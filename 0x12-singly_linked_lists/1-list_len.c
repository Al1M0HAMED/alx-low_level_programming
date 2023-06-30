#include "lists.h"
/**
 * list_len - gets linked list length.
 * @h: linked list.
 * Return: list length.
 */
size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
