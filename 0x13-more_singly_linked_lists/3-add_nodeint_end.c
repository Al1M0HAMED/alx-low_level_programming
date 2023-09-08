#include "lists.h"
/**
 * add_nodeint_end - this function adds node at the end of a linked list.
 * @n: is the new node data.
 * @head: is the linked list address.
 * Return: the new node address.
 */
listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new_node, *head;

	head = *h;
	new_node = malloc(sizeof(new_node));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!head)
		head = new_node;
	else
	{
		while(head->next)
			head = head->next;
		head->next = new_node;
	}
	return (new_node);
}
