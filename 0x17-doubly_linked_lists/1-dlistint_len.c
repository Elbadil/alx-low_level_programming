#include "lists.h"

/**
 * dlistint_len - Returns the number of element in a doubly linked list
 * @h: pointer to the head of the linked list
 * Return: Number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
