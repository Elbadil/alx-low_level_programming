#include "main.h"
/**
 * print_diagonal - To print diagonal line every time there a number > 0
 * @n: our number
 */
void print_diagonal(int n)
{
	int d;
	int b;

	if (n > 0)
	{
		for (d = 1 ; d <= n ; d++)
		{
			for (b = 1 ; b <= n ; b++)
			{
				if (b == d)
					_putchar('\\');
				else if (b < d)
					_putchar(' ');
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
