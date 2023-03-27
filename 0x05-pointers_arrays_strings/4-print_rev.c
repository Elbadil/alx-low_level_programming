#include "main.h"
/**
 * print_rev - Funtion that prints the string in reverse
 * @s: string parameter
 */
void print_rev(char *s)
{
	int r;
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (r = i - 1 ; r >= 0 ; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
