#include "lists.h"
/**
 * add_dnodeint_end - adds a node at end of dlistint_t list.
 * @head: is the address of linked list.
 * @n: is the new node data.
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	while (current && current->next)
	{
		current = current->next;
	}

	new_node->prev = current;
	if (current)
	{
		current->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
