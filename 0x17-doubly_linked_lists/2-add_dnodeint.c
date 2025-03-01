#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: the list.
 * @n: is the node data
 * Return: NULL if faild of the address of the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (*head)
	{
		if ((*head)->prev)
		{
			new_node->prev = (*head)->prev;
			temp = (*head)->prev;
			temp->next = new_node;
		}
		(*head)->prev = new_node;
	}

	*head = new_node;
	return (new_node);
}
