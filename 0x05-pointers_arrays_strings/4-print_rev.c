#include "main.h"
/**
 * print_rev - Funtion that prints the string in reverse
 * @s: string parameter
 */
void print_rev(char *s)
{
	int r;
	int count;

	count = 0;
	for (r = 0 ; s[r] != '\0' ; r++)
	{
		count++;
	}
	for (r = count ; r >= 0 ; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
