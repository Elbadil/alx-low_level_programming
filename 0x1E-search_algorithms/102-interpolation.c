#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: array of integers
 * @size: size of the array of integers
 * @value: The integer we are searching for
 * Return: the index of the integer we're searching for
*/

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = low + (((double)(high - low) / (array[high] - array[low])) *
	   (value - array[low]));

	if (pos < size)
	{
		while (array[pos] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
			pos++;
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		return (pos);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
	}
	return (-1);
}
