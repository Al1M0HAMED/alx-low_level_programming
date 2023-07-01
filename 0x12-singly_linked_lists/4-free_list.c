#include "lists.h"
/**
 * free_list - this function frees list_t list.
 * @head: is a list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
