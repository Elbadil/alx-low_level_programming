#include "main.h"
/**
 * print_rev - Funtion that prints the string in reverse
 * @s: string parameter
 */
void print_rev(char *s)
{
	int i;
	int r;

	for (i = 0 ; s[i] != '\0' ;)
	{
		i++;
	}
	for (r = i - 1 ; r >= 0 ; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
