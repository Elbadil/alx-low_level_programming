#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: string
 * @c: character
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return(s);
	}
	return ('\0');
}
