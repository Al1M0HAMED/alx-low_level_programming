#include "lists.h"
/**
 * print_list - printf a linked list.
 * @h: linked list.
 * Return: the length of a linked list.
 */
size_t print_list(const list_t *h)
{
	int length;

	length = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		length++;
	}
	return (length);
}
