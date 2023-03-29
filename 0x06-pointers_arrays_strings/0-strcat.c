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
	int a;

	for (l = 0 ; dest[l] != '\0' ;)
		l++;
	for (i = 0 ; src[i] != '\0' ;)
		i++;
	for (a = 0 ; a <= i ; a++)
	dest[l + a] = src[a];
	return (dest);
}
