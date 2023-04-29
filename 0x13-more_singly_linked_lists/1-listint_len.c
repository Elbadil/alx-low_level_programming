#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - print number of elements in a linked list of integers
 * @h: Pointer to a linked list
 * Return: number of elemets
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
