#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: is the head of the list.
 * @idx: is the index the new node should be at this idx.
 * @n: is the the data of the new node.
 *
 * Return: adrees of the new_node or NULL if failed.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int idx)
{
	unsigned int i;
	dlistint_t *temp, *current_node = *h;

	for (i = 0; i < idx && current_node; i++)
		current_node = current_node->next;

	if (i == idx && current_node != NULL)
	{
		if (current_node->next)
		{
			temp = current_node->next;
			temp->prev = current_node->prev;
		}
		if (current_node->prev)
                {
                        temp = current_node->prev;
                        temp->next = current_node->next;
                }
		else
			*h = current_node->next;

		free(current_node);
		return (1);
	}
	return (-1);
}
