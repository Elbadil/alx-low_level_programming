#include "lists.h"

/**
 * sum_dlistint - Calculte the sum of all data in dlinked list
 * @head: Pointer to the head of a dlinked list
 * Return: sum of all date in the linked list
*/

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
