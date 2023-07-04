#include "lists.h"
/**
 * sum_listint - this function return the sum of linked list data.
 * @head: is the head of the list.
 * Return: the sum of the linked list's data.
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum;

	sum = 0, temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
