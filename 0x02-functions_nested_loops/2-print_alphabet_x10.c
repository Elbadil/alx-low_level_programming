#include "main.h"
/**
 * print_alphabet_x10 - to print alphabete 10 times
 *
 * Return: Always 0 succes
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char b;

	while (i < 10)
	{
		for (b = 'a' ; b <= 'z' ; b++)
			_putchar(b);
		_putchar('\n');
		i++;
	}
}
