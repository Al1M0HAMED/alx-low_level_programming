#include "lists.h"
/**
 * add_node_end - add node to a list.
 * @head: a pointer to the head of the list.
 * @str: is a pointer to const char.
 * Return: pointer t new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int length = 0;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	new->str = strdup(str);
	new->len = length;
	new->next = NULL;

	if (temp == NULL)
	{
		*head = new;
		return (new);
	}

	while ((temp)->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
