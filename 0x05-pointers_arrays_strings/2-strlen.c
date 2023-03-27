#include "main.h"
/**
 * _strlen - To calculate the lenght of a string
 * @s: Our parameter
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int l = 0;

	for (; *s++;)
		l++;
	return (l);
}
