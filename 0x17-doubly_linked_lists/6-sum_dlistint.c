#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
 * @head: is the list.
 * Return: sum of data in a list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
