#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list..
 * @head: is hte list.
 * @index: is the nth index
 * Return: address of the node or NULL if faild.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i != index && head)
		head = head->next, i++;

	if (i != index || !head)
		return (NULL);

	return (head);
}
