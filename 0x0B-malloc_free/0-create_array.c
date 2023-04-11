#include "main.h"
#include <stdlib.h>
/**
 * create_array - To create an array of chars
 * @size: the size of the array
 * @c: value of the array
 * Return: NULL if size is 0, else pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
	}
	return (s);
}
