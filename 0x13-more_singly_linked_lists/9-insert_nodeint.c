#include "lists.h"
/**
 * insert_nodeint_at_index - this function add a element in a specific incdex.
 * @head: this is the head of the list.
 * @n: is the data for the new element
 * @idx: is the required idex to put new element to the list.
 * Return: the address of the new node or NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *new;

	i = 0, temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (temp == NULL)
	{
		new->next = NULL;
		temp->next = new;
		return (new);
	}
	while (i < idx)
	{
		if (i + 1 == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
