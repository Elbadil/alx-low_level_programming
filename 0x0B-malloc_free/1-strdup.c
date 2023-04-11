#include "main.h"
#include <stdlib.h>
/**
 * _strdup - To return a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to a copy of the string given
 */
char *_strdup(char *str)
{
	char *s;
	int i, j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}
