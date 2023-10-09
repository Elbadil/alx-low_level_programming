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
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: array of integers
 * @size: size of the array of integers
 * @value: The integer we are searching for
 * Return: the index of the integer we're searching for
*/

int binary_search(int *array, size_t size, int value)
{
	int mid;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		/* return middle index if it's value is equal to the value */
		if (array[mid] == value)
		{
			return (mid);
		}

		/* go right if the value of the middle index is bigger than the value */
		if (array[mid] < value)
		{
			left = mid + 1;
		}

		/* go left if the value of the middle index is less than the value */
		if (array[mid] > value)
		{
			right = mid - 1;
		}
	}

	return (-1);
}
