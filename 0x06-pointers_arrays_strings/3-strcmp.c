#include "main.h"
/**
 * _strcmp - To compare two string
 * @s1: First string
 * @s2: Second string
 * Return: 0 if they are equal
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
