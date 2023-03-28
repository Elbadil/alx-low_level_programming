#include "main.h"
/**
 * puts_half - To Print half of the string
 * @str: our pointer to print half of the string
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0 ; str[i] != '\0' ;)
		i++;
	if (i % 2 == 0)
	{
		n = (i - 1) / 2;
	}
	else if (i % 2 != 0)
	{
		n = (i / 2);
	}
	n++;
	for (i = n ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
