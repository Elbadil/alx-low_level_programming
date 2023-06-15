#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at the end of a dlinked list
 * @head: double pointer to the the of the linked list
 * @n: data of the new node
 * Return: New node at the end of a dlinked list
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newn;
	dlistint_t *temp = *head;

	newn = malloc(sizeof(dlistint_t));
	if (newn == NULL)
		return (NULL);
	
	newn->n = n;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	if (*head != NULL)
		(*head)->prev = newn;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newn;
	newn->prev = temp;

	return (newn);
}
