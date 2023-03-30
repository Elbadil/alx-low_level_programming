#include "main.h"
/**
 * string_toupper - To change lowercase characters into uppercase characters
 * @s: Pointer
 * Return: char
 */
char *string_toupper(char *s)
{
	int l;

	l = 0;
	while (s[l] != '\0')
	{
		if (s[l] >= 'a' && s[l] <= 'z')
		{
			s[l] = s[l] - 32;
		}
		l++;
	}
	return (s);
}
