#include "main.h"
/**
 * _memset - To fill memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: size of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
