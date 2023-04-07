#include "main.h"
/**
 * _strspn - Length of a prefix substring
 * @s: string
 * @accept: bytes from
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c;

	a = 0;
	c = 0;
	while (s[a] != '\0')
	{
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
				break;
			}
			else if (accept[b + 1] == '\0')
			{
				return (c);
			}

		}
		a++;
	}
	return (c);
}
