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
		temp = head->next;
		free(head);
		head = temp;
	}
}
