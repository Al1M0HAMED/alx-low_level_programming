#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: is the address of the linked list.
 * @index: is the index of the node, starting from 0.
 *
 * Return: if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (!index)
		{
			return (head);
		}
		head = head->next;
		index--;
	}
	return (NULL);
}
