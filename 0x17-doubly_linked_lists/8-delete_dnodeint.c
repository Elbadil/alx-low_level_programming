#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes node at index in a dlinked list
 * @head: Double pointer to the head of dlinked list
 * @index: index where to delete the node
 * Return: 1 if success, -1 if failure
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *previous = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (previous != NULL && i < index - 1)
	{
		previous = previous->next;
		i++;
	}

	if (previous == NULL || previous->next == NULL)
		return (-1);

	current = previous->next;
	previous->next = current->next;

	if (previous->next != NULL)
		previous->next->prev = previous;

	free(current);

	return (1);
}
