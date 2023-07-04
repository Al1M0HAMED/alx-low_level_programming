#include "lists.h"
/**
 * delete_nodeint_at_index - this function deletes a node at index.
 * @index: is the indext of the node needs to be deleted.
 * @head: is the head of the list.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *temp1;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
	i = 0, temp = *head;
	while (i < index - 1)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
		i++;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}
