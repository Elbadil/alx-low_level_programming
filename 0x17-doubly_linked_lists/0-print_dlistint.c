#include "lists.h"

/**
 * print_dlistint - Prints all element of a doubly linked list
 * @h: pointer to the head of the linked list
 * Return: Number of nodes in the linked list
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}

	return (n);
}
