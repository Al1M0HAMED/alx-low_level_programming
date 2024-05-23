#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: is the head of the list.
 * @idx: is the index the new node should be at this idx.
 * @n: is the the data of the new node.
 *
 * Return: adrees of the new_node or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *current_node = *h;

	for (i = 0; i < idx && current_node != NULL; i++)
		current_node = current_node->next;

	if (i == idx && current_node == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	if (i == idx)
	{
		if (idx == 0)
			return (*h = add_dnodeint(&current_node, n));
		else
			return (add_dnodeint(&current_node, n));
	}

	return (NULL);
}
