#include "lists.h"
/**
 * add_dnodeint - adds node at the begginnig of a dlistint_t list.
 * @head: is the address of the list head.
 * @n: is the new noe data.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head)
	{
		(*head)->prev = new_node;
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
