#include "lists.h"
/**
 * pop_listint - this function deletes a element in a linked list.
 * @head: is the head of the list.
 * Return: 0 if num of list is 0 else num of  deleted element data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
