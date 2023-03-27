#include "main.h"
/**
 * _strlen - To calculate the lenght of a string
 * @s: Our tring parameter
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0 ; s[l] != '\0';)
		l++;
	return (l);
}
