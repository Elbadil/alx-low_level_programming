#include "main.h"
/**
 * print_alphabet - to print all alphabet from a to z
 *
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		_putchar(b);
	_putchar('\n');
}
