#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array of integers
 * @size: size of the array of integers
 * @value: The integer we are searching for
 * Return: the index of the integer we're searching for
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, j;
	size_t block_size = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += block_size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i - block_size, i);

	for (j = i - block_size; j <= i && j < size; j++)
	{
		if (array[j] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
			return (j);
		}
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	}

	return (-1);
}
