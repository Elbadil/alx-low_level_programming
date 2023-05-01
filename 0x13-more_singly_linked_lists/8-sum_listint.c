#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - Sum of a linked list of integers
 * @head: Pointer to a linked list
 * Return: Sum
*/
int sum_listint(listint_t *head)
{
	int i = 0, sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}
	return (sum);
}
