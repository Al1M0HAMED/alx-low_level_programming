#include "lists.h"
/**
 * free_listint - this function frees a list.
 * @head: is the linked list head address.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp)
	{
		free(temp);
		head = head->next;
		temp = head;
	}
}
