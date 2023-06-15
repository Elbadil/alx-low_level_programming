#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node at a specific index in a dlist
 * @head: Pointer to the head of the dlinked list
 * @index: index of the node to get
 * Return: node at a specific index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int i = 0;

	if (index == 0)
		return (head);

	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);

	return (temp);
}
