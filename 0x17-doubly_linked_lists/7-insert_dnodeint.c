#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: is the address of the linked list.
 * @idx: is the index we need to add the new node.
 * @n: is the new list data.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;

	if (!idx)
	{
		new_node->next = *h;
		if (head)
		{
			head->prev = new_node;
		}
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	while (head && head->next && idx != 1)
	{
		head = head->next;
		idx--;
	}
	if (idx == 1 && head)
	{
		new_node->next = head->next;
		head->next = new_node;
		new_node->prev = head;
		if (new_node->next)
		{
			new_node->next->prev = new_node;
		}
		return (new_node);
	}
	return (NULL);
}
