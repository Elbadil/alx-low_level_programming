#include "main.h"
/**
 * _strcpy - Copy the string printed by src to dest
 * @dest: Parameter char to check
 * @src: Second parameter char to check
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
