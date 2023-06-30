#include "lists.h"
/**
 * add_node - add node to a list.
 * @head: a pointer to the head of the list.
 * @str: is a pointer to const char.
 * Return: pointer t new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *s;
	unsigned int length = 0;

	s = malloc(sizeof(list_t));
	if (s == NULL)
		return (NULL);
	for (; str[length] != '\0'; length++)
	s->str = strdup(str);
	s->len = length;
	s->next = *head;
	*head = s;
	return (*head);
}
