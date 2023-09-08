#include "lists.h"
/**
 * add_nodeint_end - this function adds node at the end of a linked list.
 * @n: is the new node data.
 * @head: is the linked list address.
 * Return: the new node address.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t len;
	listint_t *new_node;

	new_node = malloc(sizeof(new_node));
	new_node->n = n;
	if (!new_node)
		return (NULL);
	len = listint_len(*head);
	if (len == 0)
	{
		*head = new_node;
		return (new_node);
	}
	len -= 1;
	while(len >= 1)
	{
		*head = (*head)->next;
		len--;
	}
	(*head)->next = new_node;
	return (new_node);
}
/**
 * listint_len - this function returns the number of elements in a linked.
 * @h: is the address of a linked list.
 * Return: the len of a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
		len++, h = h->next;
	return (len);
}
