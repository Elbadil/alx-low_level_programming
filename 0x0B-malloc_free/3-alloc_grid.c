#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - to return a pointer to 2D array of integers
 * @width: width of the 2D array
 * @height: height of the 2D array
 * Return: pointer to the 2D array
 */
int **alloc_grid(int width, int height)
{
	int **n;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);

	n = malloc(sizeof(int *) * height);

	if (n == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		n[i] = malloc(sizeof(int) * width);
		if (n[i] == NULL)
		{
			for (; i >= 0; i--)
				free(n[i]);

			free(n);
			return (NULL);
		}
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			n[i][j] = 0;
		}
	}
	return (n);
}
