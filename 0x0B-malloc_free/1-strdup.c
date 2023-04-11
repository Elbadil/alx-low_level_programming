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
	int i;

	i = 0;
	s = malloc(sizeof(char) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		while (str[i] != '\0')
		{
			s[i] = str[i];
			i++;
		}
		return (s);
	}
}
