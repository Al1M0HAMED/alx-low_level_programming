#include "lists.h"
/**
 * insert_nodeint_at_index - this function insert new node at idx.
 * @head: is the linked list address.
 * @idx: is the index of the specific node we need to return.
 * @n: is the node data.
 * Return: NULL if dosen't exist or the address of the node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	size_t i;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	i = 0;
	while (i < idx - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
