#include "main.h"
/**
 * print_line - To print line for every number
 * @n: our number
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1 ; i <= n ; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}

