#include "lists.h"
/**
 * delete_nodeint_at_index - this function deletes node at index.
 * @head: is the address of the linked list.
 * @index: is the index.
 * Return: 1 on success and 0 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head, *temp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	i = 0;
	while (i < index - 1 && current != NULL)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
