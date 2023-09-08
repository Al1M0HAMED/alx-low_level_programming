#include "lists.h"
/**
 * free_listint2 - Frees a list.
 * @head: Address of the first node of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	if (!*head)
		return;
	while (temp != NULL)
	{
		*head = (*head)->next;
		free(temp);
		temp = *head;
	}
}
