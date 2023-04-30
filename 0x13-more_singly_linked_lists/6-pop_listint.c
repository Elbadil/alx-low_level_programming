#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Double pointer to a linked list
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
