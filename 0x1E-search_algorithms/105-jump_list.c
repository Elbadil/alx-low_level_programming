#include "search_algos.h"

/**
 * 
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	listint_t *previous;
	size_t i;
	size_t left;
	size_t right;
	size_t block_size;

	if (list == NULL)
		return (NULL);

	block_size = sqrt(size);
	i = block_size;

	while (temp != NULL && temp->n < value && i < size)
	{
		previous = temp;
		while (temp != NULL && temp->index != i)
		{
			temp = temp->next;
		}
		/* we found the element at the index of the list */
		if (temp != NULL && temp->n < value)
		{
			i += block_size;
		}
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
	}
	left = previous->index;
	right = temp->index;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (previous != NULL && previous->index <= right)
	{
		printf("Value checked at index [%ld] = [%d]\n", previous->index, previous->n);
		if (previous->n == value)
		{
			return (previous);
		}
		previous = previous->next;
	}
	return (NULL);
}
