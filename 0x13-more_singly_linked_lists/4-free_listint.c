#include "lists.h"
/**
 * free_listint - this function frees linked list.
 * @head: the head of the linked list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(head);
		head = temp->next;
		temp = temp->next;
	}
}
