#include "main.h"
/**
 * _strncat - To concatenates two strings
 * @dest: First string
 * @src : Second string
 * @n: bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	for (l = 0 ; dest[l] != '\0' ;)
		l++;
	for (i = 0 ; i < n && src[i] != '\0' ;)
	{
		dest[l] = src[i];
		i++;
		l++;
	}
	dest[l] = '\0';
	return (dest);
}
