#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a specific index
 * @head: Double pointer to a linked list
 * @idx: Where we adding a new node
 * @n: value of the new node
 * Return: new node at a specific index
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn;
	listint_t *temp = *head;
	unsigned int i = 0;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL || head == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}

	while (temp != NULL && i < idx)
	{
		if (i == idx - 1)
		{
			newn->next = temp->next;
			temp->next = newn;
			return (newn);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}

	return (NULL);
}
