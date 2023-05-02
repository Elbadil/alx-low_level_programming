#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: Double pointer to a linked list
 * @index: Where we deleting a node
 * Return: 1 (success), -1 (failure)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp = *head;
	listint_t *current = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	for (n = 0; n < index - 1; n++)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
