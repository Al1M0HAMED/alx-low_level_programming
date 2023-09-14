#include "lists.h"
/**
 * dlistint_len - this program prints all the elements of dlistint_t list.
 * @h: is the head of the linked list
 * Return: the length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
