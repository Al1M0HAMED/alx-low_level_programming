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
	listint_t *new_node, *temp = *head;
	size_t len, i = 1;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!idx)
	{
		new_node->next = (*head)->next;
		*head = new_node;
		return (new_node);
	}

	len = listint_len(temp);
	if (idx > len)
		return (NULL);

	while (i < idx)
	{
		temp = temp->next, i++;
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
/**
 * listint_len - this function returns the number of elements in a linked.
 * @h: is the address of a linked list.
 * Return: the len of a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
		len++, h = h->next;
	return (len);
}
