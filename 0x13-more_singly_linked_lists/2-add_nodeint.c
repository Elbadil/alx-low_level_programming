#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Adds new node at the beginning of a linked list
 * @head: double pointer to a linked list
 * @n: new integer to be added
 * Return: Pointer to a new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newn;

	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
	return (NULL);

	newn->n = n;
	newn->next = (*head);
	(*head) = newn;

	return (newn);
}
