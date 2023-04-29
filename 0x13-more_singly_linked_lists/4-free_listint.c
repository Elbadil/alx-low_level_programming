#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees a list_t list
 * @head: pointer to the linked list
 * Return : nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
