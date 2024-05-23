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
	dlistint_t *temp = *h;

	for (i = 0; i < idx && temp; i++)
		temp = temp->next;

	if (i == idx && temp == NULL)
	{
		return (add_dnodeint_end(h, n));
	}

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	if (i == idx)
	{
		return (add_dnodeint(&temp, n));
	}

	return (NULL);

}
