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
	newn->next = *head;
	newn->prev = NULL;
	*head = newn;

	return (newn);
}
