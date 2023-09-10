#include "lists.h"
/**
 * pop_listint - this function deletes a linked list head.
 * @head: is the linked list.
 * Return: the deleted node data or 0 if failed.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = *head;

	if (*head != NULL)
	{
		data = (*head)->n;
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	return (data);
}
