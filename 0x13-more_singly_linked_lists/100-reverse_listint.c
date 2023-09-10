#include "lists.h"
/**
 * reverse_listint - this function reverse a linked list.
 * @head: is the linked list address.
 * Return: the address of first node of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *previos;

	next = NULL, previos = NULL;
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previos;
		previos = *head;
		*head = next;
	}
	*head = previos;
	return (*head);
}
