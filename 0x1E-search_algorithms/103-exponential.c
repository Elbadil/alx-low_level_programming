#include "search_algos.h"

/**
 * print_array - Prints the array of integers
 * @array: array of integers
 * @left: index of the first element of the array
 * @right: index of the last element of the array
*/

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: array of integers
 * @size: size of the array of integers
 * @value: The integer we are searching for
 * Return: the index of the integer we're searching for
*/

int exponential_search(int *array, size_t size, int value)
{
	int left;
	int right;
	int mid;
	size_t i = 1;

	if (array == NULL)
		return (-1);

	while (array[i] < value && i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	left = i / 2;
	right = i < size ? i : size - 1;
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		else if (array[mid] > value)
		{
			right = mid - 1;
		}

		else
		{
			left = mid + 1;
		}
	}
	return (-1);
}
