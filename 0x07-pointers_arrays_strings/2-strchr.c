#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (0);
}
