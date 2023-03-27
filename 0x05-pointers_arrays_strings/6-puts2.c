#include "main.h"
/**
 * puts2 - Print every other character
 * @str: Our Every other character parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
