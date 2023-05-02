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
	listint_t *current = *head;
	listint_t *previous = *head;

	if (*head == NULL || *current == NULL || *previous == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		current = NULL;
		return (1);
	}

	while (index != 0)
	{
		previous = current;
		current = current->next;
		index--;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	return (1);
}
