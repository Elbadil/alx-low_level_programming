#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - function that searches for integers
 * @array: array of integers
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
