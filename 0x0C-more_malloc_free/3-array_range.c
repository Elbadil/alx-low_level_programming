#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimun range of values
 * @max: maximum range of values
 * Return: to the newly created array
 */
int *array_range(int min, int max)
{
	int *p;
	int i, asize;

	if (min > max)
	{
		return (NULL);
	}
	asize = max - min + 1;

	p = malloc(sizeof(int) * asize);

	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
