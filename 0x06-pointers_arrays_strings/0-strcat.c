#include "main.h"
/**
 * _strcat - To concatenates two strings
 * @dest: First string
 * @src: Second string
 * Return: Char
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int i;

	for (l = 0 ; dest[l] != '\0' ;)
		l++;
	for (i = 0 ; src[i] != '\0' ;)
	{
		dest[l] = src[i];
		l++;
		i++;
	}
	dest[l] = '\0';
	return (dest);
}
