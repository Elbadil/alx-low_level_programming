#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list
 * @size: size of the linked list
 * @value: The integer we are searching for
 * Return: pointer to the first node where value is located
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temp = list;
	listint_t *prev;
	size_t i;
	size_t left;
	size_t right;
	size_t block_size;

	if (list == NULL)
		return (NULL);

	block_size = sqrt(size);
	i = block_size;
	while (temp != NULL && temp->n < value)
	{
		prev = temp;
		i = i < size ? i : size - 1;
		while (temp != NULL && temp->index != i)
			temp = temp->next;
		if (temp != NULL && temp->n < value)
			i += block_size;
		printf("Value checked at index [%ld] = [%d]\n", temp->index, temp->n);
		if (temp->index + 1 >= size)
			break;
	}

	left = prev->index;
	right = temp->index;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);

	while (prev != NULL && prev->index <= right)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
		{
			return (prev);
		}
		prev = prev->next;
	}
	return (NULL);
}
