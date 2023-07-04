#include "lists.h"
/**
 * get_nodeint_at_index - this function gets  node at specefic index.
 * @index: is the index :).
 * @head: is the head of the list.
 * Return: the address of the node at the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0, temp = head;
	if (temp == NULL)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
			return (temp);
		temp = temp->next, i++;
	}
	return (NULL);
}
