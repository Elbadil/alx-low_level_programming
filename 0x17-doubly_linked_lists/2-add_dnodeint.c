#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of dlinked list
 * @head: Double pointer to the head of a dlinked list
 * @n: data of the node to be added
 * Return: New node at the beginning of a dlinked list
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newn;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->prev = NULL;
	newn->next = (*head);

	if (*head != NULL)
		(*head)->prev = newn;

	*head = newn;

	return (newn);
}
