#include "main.h"
/**
 * _strstr - locate a substring
 * @haystack: first string
 * @needle: substring
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (haystack[a])
	{
		while (needle[b] && (haystack[a] == needle[0]))
		{
			if (haystack[a + b] == needle[b])
			{
				b++;
			}
			else
			{
				break;
			}
		}
		if (needle[b])
		{
			a++;
			b = 0;
		}
		else
		{
			return (haystack + a);
		}
	}
	return (0);
}
