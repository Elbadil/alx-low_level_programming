#include <stdlib.h>
#include "lists.h"
/**
 * free_list - Frees a list_t list
 * @head: pointer to the linked list
 * Return : nothing
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
