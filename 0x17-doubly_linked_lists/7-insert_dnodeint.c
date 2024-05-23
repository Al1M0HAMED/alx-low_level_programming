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
	dlistint_t *new_node, *temp, *current_node = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (!idx)
	{
		(*h)->prev = new_node;
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}
	for (i = 1; i < idx && current_node && current_node->next; i++)
		current_node = current_node->next;

	if (i == idx)
	{
		if (current_node->next)
		{
			temp = current_node->next;
			temp->prev = new_node;
		}

		new_node->next = current_node->next;
		new_node->prev = current_node;
		current_node->next = new_node;

		return (new_node);
	}

	return (NULL);

}
