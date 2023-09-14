#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list.
 * @index: is the index we need to delete node at.
 * @h: is the address of the linked list.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *head = *h, *temp = *h;
	
	if (!index && *h)
	{
		temp = (*h)->next;
		free(head);
		*h = temp;
		return (1);
	}
	while (head && head->next && index > 0)
	{
		head = head->next;
		index--;
	}
	if (!index && head)
	{
		temp = head->next;
		head->prev->next = head->next;
		if (temp)
		{
			temp->prev = head->prev;
		}
		free(head);
		head = temp;
		return (1);
	}
	return (-1);
}
