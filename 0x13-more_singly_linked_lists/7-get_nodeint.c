#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets a node of linked list depends on index
 * @head: Pointer to the list
 * @index: the index of nodes
 * Return: The nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	if (temp == NULL)
		return (NULL);

	while (temp != NULL && n < index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
