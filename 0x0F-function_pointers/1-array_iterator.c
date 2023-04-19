#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function that execute a function of array of integers
 * @array: array to be printed
 * @size: size of the array
 * @action: Pointer to a function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
