#include "lists.h"
/**
 * get_nodeint_at_index - this function return node at idx.
 * @head: is the linked list address.
 * @idx: is the index of the specific node we need to return.
 * Return: NULL if dosen't exist or the address of the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int idx)
{
	listint_t *temp = head;
	size_t len, i = 0;

	len = listint_len(head);
	if (len > idx)
	{
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		return (temp);
	}
	return (NULL);
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
