#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts new node at given index in a list
 * @h: Double pointer to the head of the dlinked list
 * @idx: Index where to add new node
 * @n: Data of the new node
 * Return: New node at given index at the list
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newn;
	dlistint_t *temp = *h;
	unsigned int i = 0;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);

	newn->n = n;
	newn->next = NULL;

	if (idx == 0)
	{
		newn->prev = NULL;
		newn->next = *h;
		if (*h != NULL)
			(*h)->prev = newn;
		return (newn);
	}

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	newn->next = temp->next;
	temp->next = newn;
	newn->prev = temp;

	return (newn);
}
