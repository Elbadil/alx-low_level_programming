#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - print all elemets of lists_t list
 * @h: pointer to the linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (s);
}
