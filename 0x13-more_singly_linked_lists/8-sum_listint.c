#include "lists.h"
/**
 * sum_listint - this funciton returns the sum of linked list data.
 * @head: is the linked list.
 * Return: the sum of linked list data.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
